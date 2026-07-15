/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Data {

struct BotCommand final {
	QString command;
	QString description;
	bool ephemeral = false;

	friend inline bool operator==(
		const BotCommand &,
		const BotCommand &) = default;
};

[[nodiscard]] BotCommand BotCommandFromTL(const MTPBotCommand &result);

} // namespace Data
