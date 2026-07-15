/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Main {
class Session;
} // namespace Main

namespace Ui {

void ScheduleThanosEffectWarmUp(
	not_null<Main::Session*> session,
	rpl::lifetime &lifetime);

} // namespace Ui
