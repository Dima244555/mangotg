/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/object_ptr.h"

namespace Ui {
class RpWidget;

[[nodiscard]] object_ptr<RpWidget> CreateScreenReaderBar(
	not_null<QWidget*> parent,
	Fn<void()> disableCallback);

} // namespace Ui
