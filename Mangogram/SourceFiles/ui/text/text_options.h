/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

struct TextParseOptions;

namespace Ui {

void InitTextOptions();

const TextParseOptions &ItemTextDefaultOptions();
const TextParseOptions &ItemTextBotDefaultOptions();
const TextParseOptions &ItemTextNoMonoOptions();
const TextParseOptions &ItemTextBotNoMonoOptions();
const TextParseOptions &ItemTextServiceOptions();

const TextParseOptions &WebpageTextTitleOptions();
const TextParseOptions &WebpageTextDescriptionOptions();

const TextParseOptions &NameTextOptions();
const TextParseOptions &DialogTextOptions();

} // namespace Ui
