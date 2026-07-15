/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class PeerData;

namespace Ui {

class GenericBox;
class SettingsButton;

struct InviteLinkSubscriptionToggle;

InviteLinkSubscriptionToggle FillCreateInviteLinkSubscriptionToggle(
	not_null<Ui::GenericBox*> box,
	not_null<PeerData*> peer);

} // namespace Ui
