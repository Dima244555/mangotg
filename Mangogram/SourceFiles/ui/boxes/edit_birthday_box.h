/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Data {
class Birthday;
} // namespace Data

namespace Ui {

class GenericBox;

enum class EditBirthdayType {
	Edit,
	Suggest,
	ConfirmSuggestion,
};

void EditBirthdayBox(
	not_null<Ui::GenericBox*> box,
	Data::Birthday current,
	Fn<void(Data::Birthday)> save,
	EditBirthdayType type = EditBirthdayType::Edit);

} // namespace Ui
