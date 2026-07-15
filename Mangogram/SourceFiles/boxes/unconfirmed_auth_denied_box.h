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

namespace Dialogs {

void ShowAuthDeniedBox(
	not_null<Ui::GenericBox*> box,
	float64 count,
	const QString &messageText);

} // namespace Dialogs
