/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {

class RpWidget;

[[nodiscard]] QPainterPath ToggleUpDownArrowPath(
	float64 x,
	float64 y,
	float64 size,
	float64 fourStrokes,
	float64 progress);

void AddToggleUpDownArrowToMoreButton(not_null<Ui::RpWidget*> parent);

} // namespace Ui
