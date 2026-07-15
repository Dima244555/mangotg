/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class PeerData;

namespace Data {
struct CreditsHistoryEntry;
} // namespace Data

namespace Api {

[[nodiscard]] Data::CreditsHistoryEntry CreditsHistoryEntryFromTL(
	const MTPStarsTransaction &tl,
	not_null<PeerData*> peer);

} // namespace Api
