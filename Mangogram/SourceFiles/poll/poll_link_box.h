/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {
class GenericBox;
} // namespace Ui

namespace Poll {

void AddPollOptionLinkBox(
	not_null<Ui::GenericBox*> box,
	const QString &initial,
	Fn<void(QString)> callback);

} // namespace Poll
