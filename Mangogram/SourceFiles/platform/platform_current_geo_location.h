/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Core {
struct GeoLocation;
struct GeoAddress;
} // namespace Core

namespace Platform {

void ResolveCurrentExactLocation(Fn<void(Core::GeoLocation)> callback);
void ResolveLocationAddress(
	const Core::GeoLocation &location,
	const QString &language,
	Fn<void(Core::GeoAddress)> callback);

} // namespace Platform
