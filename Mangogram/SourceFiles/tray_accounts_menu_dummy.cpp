/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#include "tray_accounts_menu.h"

namespace Core::TrayAccountsMenu {

void SetupChangesSubscription(
		[[maybe_unused]] Fn<void()> callback,
		[[maybe_unused]] rpl::lifetime &lifetime) {
}

void Fill([[maybe_unused]] Platform::Tray &tray) {
}

} // namespace Core::TrayAccountsMenu
