/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#ifdef Q_OS_MAC

#include <QtGui/QImage>

namespace Media::Streaming {

struct NativeFrame;

[[nodiscard]] QImage ConvertNativeFrameToARGB32(const NativeFrame &frame);

} // namespace Media::Streaming

#endif // Q_OS_MAC
