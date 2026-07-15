/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class HistoryItem;

namespace Menu {

[[nodiscard]] Fn<void(bool)> RateTranscribeCallbackFactory(
	not_null<HistoryItem*>);

[[nodiscard]] bool HasRateTranscribeItem(not_null<HistoryItem*>);

} // namespace Menu
