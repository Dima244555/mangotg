/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {

class GenericBox;

[[nodiscard]] std::vector<TimeId> DefaultTimePickerValues();

[[nodiscard]] Fn<TimeId()> TimePickerBox(
	not_null<GenericBox*> box,
	std::vector<TimeId> values,
	std::vector<QString> phrases,
	TimeId startValue);

} // namespace Ui
