/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "platform/platform_translate_provider.h"

namespace Platform {

inline bool IsTranslateProviderAvailable() {
	return false;
}

inline std::unique_ptr<Ui::TranslateProvider> CreateTranslateProvider() {
	return nullptr;
}

} // namespace Platform
