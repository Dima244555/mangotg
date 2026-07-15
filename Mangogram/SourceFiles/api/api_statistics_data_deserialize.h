/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Data {
struct StatisticalGraph;
} // namespace Data

namespace Api {

[[nodiscard]] Data::StatisticalGraph StatisticalGraphFromTL(
	const MTPStatsGraph &tl);

} // namespace Api
