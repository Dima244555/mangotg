/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class UserData;

namespace Ui {
class RpWidget;
} // namespace Ui

namespace Info::Profile {

void StartProfileBirthdayEffect(
	not_null<Ui::RpWidget*> cover,
	not_null<UserData*> user,
	Fn<QRect()> userpicGeometry,
	Fn<bool()> paused);

} // namespace Info::Profile
