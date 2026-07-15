/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/dynamic_image.h"

namespace Poll {

[[nodiscard]] std::shared_ptr<Ui::DynamicImage> MakeLinkThumbnail();

} // namespace Poll
