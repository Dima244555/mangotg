/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace gi::repository::Gio {
class AppLaunchContext;
} // namespace gi::repository::Gio

namespace base::Platform {

gi::repository::Gio::AppLaunchContext AppLaunchContext();

} // namespace base::Platform
