/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Data {

struct PremiumSubscriptionOption {
	int months = 0;
	QString duration;
	QString discount;
	QString costPerMonth;
	QString costNoDiscount;
	QString costPerYear;
	QString currency;
	QString total;
	QString botUrl;
};
using PremiumSubscriptionOptions = std::vector<PremiumSubscriptionOption>;

} // namespace Data
