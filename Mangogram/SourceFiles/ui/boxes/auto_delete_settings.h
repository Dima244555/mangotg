/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/layers/generic_box.h"

namespace Ui {

void AutoDeleteSettingsBox(
	not_null<Ui::GenericBox*> box,
	TimeId ttlPeriod,
	rpl::producer<QString> about,
	Fn<void(TimeId)> callback);

} // namespace Ui
