/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/object_ptr.h"

class ChannelData;

namespace Ui {
class RpWidget;
} // namespace Ui

[[nodiscard]] object_ptr<Ui::RpWidget> CreateMembersVisibleButton(
	not_null<ChannelData*> megagroup);
