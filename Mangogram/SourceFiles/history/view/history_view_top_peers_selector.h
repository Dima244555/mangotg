// This file is part of Mangogram Desktop,
// the official desktop application for the Mangogram messaging service.
//
// For license and copyright information please follow this link:
// https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
//
#pragma once

namespace Ui {
class RpWidget;
} // namespace Ui

namespace Main {
class SessionShow;
} // namespace Main

namespace HistoryView {

void ShowTopPeersSelector(
	not_null<Ui::RpWidget*> parent,
	std::shared_ptr<Main::SessionShow> show,
	FullMsgId fullId,
	QPoint globalPos);

} // namespace HistoryView
