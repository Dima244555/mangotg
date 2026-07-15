/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "core/credits_amount.h"
#include "data/data_statistics_chart.h"

#include <QtCore/QDateTime>

namespace Data {

struct CreditsEarnStatistics final {
	explicit operator bool() const {
		return usdRate
			&& currentBalance
			&& availableBalance
			&& overallRevenue;
	}
	Data::StatisticalGraph revenueGraph;
	CreditsAmount currentBalance;
	CreditsAmount availableBalance;
	CreditsAmount overallRevenue;
	float64 usdRate = 0.;
	bool isWithdrawalEnabled = false;
	QDateTime nextWithdrawalAt;
	QString buyAdsUrl;
};

} // namespace Data
