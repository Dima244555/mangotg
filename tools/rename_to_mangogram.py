#!/usr/bin/env python3
"""
Rename all Telegram/telegram/TELEGRAM occurrences to Mangogram/mangogram/MANGOGRAM
across the whole repository:
  1) inside text file contents,
  2) in file names,
  3) in directory names.

Skip rules:
  - .git/, out/, build/, node_modules/, third-party binary artifacts
  - Binary files (detected by NUL byte in first 8 KiB)
  - Files > 5 MiB (safety)
  - The script itself
"""

from __future__ import annotations
import os
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

SKIP_DIRS = {
    ".git", "out", "build", "node_modules",
    "__pycache__", ".vs", ".vscode",
}

# Content substitutions (order matters: apply longer/more specific first).
CONTENT_SUBS = [
    ("TELEGRAM", "MANGOGRAM"),
    ("Telegram", "Mangogram"),
    ("telegram", "mangogram"),
]

# Path/name substitutions (case variants).
PATH_SUBS = [
    ("TELEGRAM", "MANGOGRAM"),
    ("Telegram", "Mangogram"),
    ("telegram", "mangogram"),
]

MAX_SIZE = 5 * 1024 * 1024  # 5 MiB


def should_skip_dir(path: Path) -> bool:
    return path.name in SKIP_DIRS


def is_binary(path: Path) -> bool:
    try:
        with path.open("rb") as f:
            chunk = f.read(8192)
        return b"\x00" in chunk
    except OSError:
        return True


def rename_in_content() -> tuple[int, int]:
    files_changed = 0
    total_replacements = 0
    self_path = Path(__file__).resolve()

    for dirpath, dirnames, filenames in os.walk(ROOT):
        # In-place prune
        dirnames[:] = [d for d in dirnames if not should_skip_dir(Path(dirpath) / d)]
        for name in filenames:
            p = Path(dirpath) / name
            if p.resolve() == self_path:
                continue
            try:
                if p.is_symlink() or not p.is_file():
                    continue
                if p.stat().st_size > MAX_SIZE:
                    continue
            except OSError:
                continue
            if is_binary(p):
                continue
            try:
                original = p.read_bytes()
            except OSError:
                continue
            try:
                text = original.decode("utf-8")
                encoding = "utf-8"
            except UnicodeDecodeError:
                try:
                    text = original.decode("latin-1")
                    encoding = "latin-1"
                except UnicodeDecodeError:
                    continue

            new_text = text
            local_replacements = 0
            for old, new in CONTENT_SUBS:
                if old in new_text:
                    local_replacements += new_text.count(old)
                    new_text = new_text.replace(old, new)

            if local_replacements > 0:
                # Preserve original newline style: we don't touch it because
                # str.replace on the full text leaves other chars intact.
                p.write_bytes(new_text.encode(encoding))
                files_changed += 1
                total_replacements += local_replacements

    return files_changed, total_replacements


def _apply_path_subs(name: str) -> str:
    for old, new in PATH_SUBS:
        name = name.replace(old, new)
    return name


def rename_paths() -> tuple[int, int]:
    """
    Rename files and directories. Walk bottom-up so directory renames
    don't invalidate paths of children we still need to visit.
    """
    files_renamed = 0
    dirs_renamed = 0

    for dirpath, dirnames, filenames in os.walk(ROOT, topdown=False):
        current_dir = Path(dirpath)
        # Skip inside git etc.
        parts = current_dir.relative_to(ROOT).parts
        if any(p in SKIP_DIRS for p in parts):
            continue

        for name in filenames:
            new_name = _apply_path_subs(name)
            if new_name != name:
                src = current_dir / name
                dst = current_dir / new_name
                if dst.exists():
                    print(f"! target exists, skip file rename: {src} -> {dst}", file=sys.stderr)
                    continue
                src.rename(dst)
                files_renamed += 1

        for name in dirnames:
            if name in SKIP_DIRS:
                continue
            new_name = _apply_path_subs(name)
            if new_name != name:
                src = current_dir / name
                dst = current_dir / new_name
                if dst.exists():
                    print(f"! target exists, skip dir rename: {src} -> {dst}", file=sys.stderr)
                    continue
                src.rename(dst)
                dirs_renamed += 1

    return files_renamed, dirs_renamed


def main() -> int:
    print("== step 1: rewriting file contents ==")
    files_changed, replacements = rename_in_content()
    print(f"  files changed:     {files_changed}")
    print(f"  total replacements: {replacements}")

    print("== step 2: renaming files/directories ==")
    files_renamed, dirs_renamed = rename_paths()
    print(f"  files renamed: {files_renamed}")
    print(f"  dirs renamed:  {dirs_renamed}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
