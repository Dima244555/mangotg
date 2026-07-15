/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {
struct MarkdownEnabledState;
} // namespace Ui

namespace Platform {

void CreateGlobalMenu();
void DestroyGlobalMenu();
void RequestUpdateGlobalMenu();

[[nodiscard]] rpl::producer<Ui::MarkdownEnabledState> GlobalMenuMarkdownState();

} // namespace Platform
