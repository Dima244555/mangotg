/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Calls::Group {

struct PreparedMessage {
	uint64 randomId = 0;
	MTPTextWithEntities message;
};

[[nodiscard]] QByteArray SerializeMessage(const PreparedMessage &data);
[[nodiscard]] std::optional<PreparedMessage> DeserializeMessage(
	const QByteArray &data);

} // namespace Calls::Group
