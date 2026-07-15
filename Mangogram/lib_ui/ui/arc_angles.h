/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace arc {

constexpr auto kFullLength = 360 * 16;
constexpr auto kHalfLength = (kFullLength / 2);
constexpr auto kQuarterLength = (kFullLength / 4);
constexpr auto kMinLength = (kFullLength / 360);
constexpr auto kAlmostFullLength = (kFullLength - kMinLength);

} // namespace arc
