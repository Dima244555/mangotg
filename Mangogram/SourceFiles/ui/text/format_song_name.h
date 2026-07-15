/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui::Text {

class FormatSongName final {
public:
	struct ComposedName {
		QString title;
		QString performer;
	};

	FormatSongName(
		const QString &filename,
		const QString &songTitle,
		const QString &songPerformer);

	[[nodiscard]] ComposedName composedName() const;
	[[nodiscard]] QString string() const;
	[[nodiscard]] TextWithEntities textWithEntities(
		bool boldOnlyPerformer = false) const;

	void setNoDash(bool noDash);

private:
	const ComposedName _composedName;
	bool _noDash = false;

};

} // namespace Ui::Text
