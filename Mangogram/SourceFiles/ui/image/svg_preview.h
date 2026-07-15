/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include <QtCore/QByteArray>
#include <QtCore/QSize>
#include <QtGui/QImage>

namespace Ui {

[[nodiscard]] int SvgPreviewBytesLimit();
[[nodiscard]] QImage RenderSvgPreview(
	const QByteArray &bytes,
	QSize maxSize);

} // namespace Ui
