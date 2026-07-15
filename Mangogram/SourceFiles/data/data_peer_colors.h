/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Data {

struct ColorProfileSet {
	std::vector<QColor> palette;
	std::vector<QColor> bg;
	std::vector<QColor> story;
};

struct ColorProfileData {
	ColorProfileSet light;
	ColorProfileSet dark;
};

} // namespace Data
