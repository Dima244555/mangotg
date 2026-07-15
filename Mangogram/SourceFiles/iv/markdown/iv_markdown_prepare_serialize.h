/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "iv/markdown/iv_markdown_prepare.h"

namespace style {
struct Markdown;
} // namespace style

namespace Iv::Markdown {

[[nodiscard]] QString SerializeInlineTextObjectEntity(
	const InlineTextObjectEntity &object);
[[nodiscard]] std::optional<InlineTextObjectEntity> ParseInlineTextObjectEntity(
	QStringView data);
[[nodiscard]] QString InlineFormulaCopySource(const QString &source);
[[nodiscard]] MarkdownPrepareDimensions CaptureMarkdownPrepareDimensions();
[[nodiscard]] MarkdownPrepareDimensions CaptureMarkdownPrepareDimensions(
	const style::Markdown &st);

} // namespace Iv::Markdown
