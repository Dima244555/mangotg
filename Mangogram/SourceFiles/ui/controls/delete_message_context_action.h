/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/unique_qptr.h"

namespace Ui {
namespace Menu {
class Menu;
class ItemBase;
} // namespace Menu

class PopupMenu;

[[nodiscard]] base::unique_qptr<Menu::ItemBase> DeleteMessageContextAction(
	not_null<Menu::Menu*> menu,
	Fn<void()> callback,
	TimeId destroyAt,
	Fn<void()> destroyByTimerCallback);

} // namespace Ui
