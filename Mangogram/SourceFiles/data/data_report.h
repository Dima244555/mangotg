/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Data {

struct ReportInput final {
	QByteArray optionId;
	QString optionText;
	QString comment;
	std::vector<MsgId> ids;
	std::vector<StoryId> stories;

	inline bool operator==(const ReportInput &other) const {
		return optionId == other.optionId && comment == other.comment;
	}
};

} // namespace Data
