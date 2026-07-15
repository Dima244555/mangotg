/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {

class GenericBox;

void ChooseFontBox(
	not_null<GenericBox*> box,
	Fn<QImage()> generatePreviewBg,
	const QString &family,
	Fn<void(QString)> save);

} // namespace Ui
