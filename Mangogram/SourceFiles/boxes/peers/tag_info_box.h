/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {
class GenericBox;
class Show;
} // namespace Ui

namespace HistoryView {
enum class BadgeRole : uchar;
} // namespace HistoryView

class PeerData;

void TagInfoBox(
	not_null<Ui::GenericBox*> box,
	std::shared_ptr<Ui::Show> show,
	not_null<PeerData*> peer,
	not_null<PeerData*> author,
	const QString &tagText,
	HistoryView::BadgeRole role);
