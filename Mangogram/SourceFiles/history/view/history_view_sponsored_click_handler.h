/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class ClickHandler;

namespace HistoryView {

[[nodiscard]] std::shared_ptr<ClickHandler> SponsoredLink(
	const QString &link,
	bool isInternal);

} // namespace HistoryView
