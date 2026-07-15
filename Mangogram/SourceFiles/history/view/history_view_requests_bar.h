/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/rp_widget.h"

namespace Ui {
struct RequestsBarContent;
} // namespace Ui

namespace HistoryView {

inline constexpr auto kRecentRequestsLimit = 3;

[[nodiscard]] rpl::producer<Ui::RequestsBarContent> RequestsBarContentByPeer(
	not_null<PeerData*> peer,
	int userpicSize,
	bool showInForum);

} // namespace HistoryView
