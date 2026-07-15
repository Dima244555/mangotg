/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/rect_part.h"

namespace Ui {

struct GroupMediaLayout {
	QRect geometry;
	RectParts sides = RectPart::None;
};

std::vector<GroupMediaLayout> LayoutMediaGroup(
	const std::vector<QSize> &sizes,
	int maxWidth,
	int minWidth,
	int spacing);

RectParts GetCornersFromSides(RectParts sides);
QSize GetImageScaleSizeForGeometry(QSize original, QSize geometry);

} // namespace Ui
