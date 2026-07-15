/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/object_ptr.h"
#include "storage/storage_shared_media.h"

namespace Ui {
class RpWidget;
} // namespace Ui

namespace Info::Profile {

[[nodiscard]] object_ptr<Ui::RpWidget> CreateTabSkeleton(
	not_null<QWidget*> parent,
	Storage::SharedMediaType type);

} // namespace Info::Profile
