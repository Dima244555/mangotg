/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class ChannelData;

namespace Window {
class SessionNavigation;
} // namespace Window

void ShowManageCommunityBox(
	not_null<Window::SessionNavigation*> navigation,
	not_null<ChannelData*> community);
