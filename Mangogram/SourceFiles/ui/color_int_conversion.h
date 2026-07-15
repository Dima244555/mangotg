/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {

[[nodiscard]] QColor ColorFromSerialized(quint32 serialized);
[[nodiscard]] std::optional<QColor> MaybeColorFromSerialized(
	quint32 serialized);
[[nodiscard]] QColor Color32FromSerialized(quint32 serialized);

} // namespace Ui
