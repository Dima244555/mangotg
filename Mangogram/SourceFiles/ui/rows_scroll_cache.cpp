/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#include "ui/rows_scroll_cache.h"

namespace Ui {
namespace {

constexpr auto kStopTimeout = crl::time(120);

} // namespace

RowsScrollCache::RowsScrollCache(Fn<void()> stopped) {
	_stopTimer.setCallback([=] {
		_scrolling = false;
		_images.clear();
		stopped();
	});
}

void RowsScrollCache::markScrolling() {
	_scrolling = true;
	_stopTimer.callOnce(kStopTimeout);
}

void RowsScrollCache::invalidate(uint64 rowId) {
	if (const auto i = _images.find(rowId); i != end(_images)) {
		_images.erase(i);
	}
}

void RowsScrollCache::clear() {
	_images.clear();
}

} // namespace Ui
