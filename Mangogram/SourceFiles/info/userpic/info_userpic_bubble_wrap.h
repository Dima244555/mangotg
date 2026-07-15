/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/rp_widget.h"

namespace Ui {

class VerticalLayout;

[[nodiscard]] QRect BubbleWrapInnerRect(const QRect &r);

not_null<Ui::RpWidget*> AddBubbleWrap(
	not_null<Ui::VerticalLayout*> container,
	const QSize &size);

} // namespace Ui
