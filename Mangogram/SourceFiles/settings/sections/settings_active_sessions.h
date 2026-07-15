/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "settings/settings_type.h"

namespace Ui {
class VerticalLayout;
} // namespace Ui

namespace Window {
class SessionController;
} // namespace Window

namespace Settings {

[[nodiscard]] Type SessionsId();

void AddSessionInfoRow(
	not_null<Ui::VerticalLayout*> container,
	rpl::producer<QString> label,
	const QString &value,
	const style::icon &icon);

} // namespace Settings
