/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Data {
struct StatisticalChart;
} // namespace Data

class QByteArray;

namespace Statistic {

[[nodiscard]] Data::StatisticalChart StatisticalChartFromJSON(
	const QByteArray &json);

} // namespace Statistic
