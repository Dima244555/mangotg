/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "info/profile/tabs/info_profile_tab_content.h"

class UserData;

namespace Info::Profile {

[[nodiscard]] MediaTabDescriptor MakeCommonGroupsTabDescriptor(
	not_null<UserData*> user);
[[nodiscard]] MediaTabDescriptor MakeSimilarPeersTabDescriptor(
	not_null<PeerData*> peer);
[[nodiscard]] MediaTabDescriptor MakeGiftsTabDescriptor(
	not_null<PeerData*> peer);

} // namespace Info::Profile
