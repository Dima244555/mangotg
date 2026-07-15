/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#import <AppKit/NSTouchBar.h>

namespace Main {
class Domain;
} // namespace Main

namespace Window {
class Controller;
} // namespace Window

namespace Ui {
struct MarkdownEnabledState;
} // namespace Ui

API_AVAILABLE(macos(10.12.2))
@interface RootTouchBar : NSTouchBar<NSTouchBarDelegate>
- (id)init:(rpl::producer<Ui::MarkdownEnabledState>)markdownState
	controller:(not_null<Window::Controller*>)controller
	domain:(not_null<Main::Domain*>)domain;
@end
