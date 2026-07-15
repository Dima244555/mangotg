/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/layers/generic_box.h"

namespace Ui {

void ToggleTopicsBox(
    not_null<Ui::GenericBox*> box,
    bool enabled,
    bool tabs,
	Fn<void(bool enabled, bool tabs)> callback);

} // namespace Ui
