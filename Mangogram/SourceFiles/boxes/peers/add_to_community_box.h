/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class ChannelData;
class PeerData;

namespace Window {
class SessionNavigation;
} // namespace Window

void ShowAddToCommunityBox(
	not_null<Window::SessionNavigation*> navigation,
	not_null<PeerData*> peer);

void ShowAddPeerToCommunity(
	not_null<Window::SessionNavigation*> navigation,
	not_null<ChannelData*> community,
	not_null<PeerData*> peer);
