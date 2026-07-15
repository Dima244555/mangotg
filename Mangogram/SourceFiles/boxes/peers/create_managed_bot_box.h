/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class UserData;

namespace Main {
class SessionShow;
} // namespace Main

namespace Ui {
class GenericBox;
} // namespace Ui

struct CreateManagedBotDescriptor {
	std::shared_ptr<Main::SessionShow> show;
	not_null<UserData*> manager;
	QString suggestedName;
	QString suggestedUsername;
	bool viaDeeplink = false;
	Fn<void(not_null<UserData*>)> done;
	Fn<void()> cancelled;
};

void CreateManagedBotBox(
	not_null<Ui::GenericBox*> box,
	CreateManagedBotDescriptor &&descriptor);

void ShowCreateManagedBotBox(CreateManagedBotDescriptor &&descriptor);
