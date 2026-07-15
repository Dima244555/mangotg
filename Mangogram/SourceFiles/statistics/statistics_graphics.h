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

namespace Statistic {

[[nodiscard]] QImage ChartCurrencyIcon(
		const Data::StatisticalChart &chartData,
		std::optional<QColor> color);

} // namespace Statistic
