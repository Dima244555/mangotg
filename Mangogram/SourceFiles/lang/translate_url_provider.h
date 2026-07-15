/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "translate_provider.h"

namespace Ui {

[[nodiscard]] std::unique_ptr<TranslateProvider> CreateUrlTranslateProvider(
	QString urlTemplate);

} // namespace Ui
