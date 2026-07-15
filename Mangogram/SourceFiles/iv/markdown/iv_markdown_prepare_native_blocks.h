/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "iv/markdown/iv_markdown_prepare_native_richtext.h"

namespace Iv::Markdown {

struct NativeIvPreparedLeafFormulaRange {
	int from = 0;
	int till = 0;
};

[[nodiscard]] bool PrepareNativeIvBlocks(
	const Iv::RichPage &page,
	std::vector<PreparedBlock> *result,
	NativeIvPrepareState *state);
[[nodiscard]] NativeInstantViewLeafUpdateResult UpdatePreparedNativeIvLeaf(
	std::vector<PreparedBlock> *blocks,
	const Iv::RichPage &page,
	const PreparedEditLeafSource &source,
	NativeIvPrepareState *state,
	NativeIvPreparedLeafFormulaRange *formulaRange);

} // namespace Iv::Markdown
