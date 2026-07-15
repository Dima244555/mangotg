/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include <QtCore/QString>

namespace Raw {

struct GeoBounds {
	double minLat = 0.;
	double minLon = 0.;
	double maxLat = 0.;
	double maxLon = 0.;
};

[[nodiscard]] const base::flat_map<QString, GeoBounds> &CountryBounds();

} // namespace Raw
