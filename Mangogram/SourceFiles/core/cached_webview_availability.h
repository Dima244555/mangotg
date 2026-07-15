/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "webview/webview_interface.h"

namespace Core {

[[nodiscard]] inline const Webview::Available &CachedWebviewAvailability() {
	static const auto result = Webview::Availability();
	return result;
}

} // namespace Core
