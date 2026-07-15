/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "platform/platform_text_recognition.h"

namespace Platform {
namespace TextRecognition {

inline bool IsAvailable() {
	return false;
}

inline Result RecognizeText(const QImage &image) {
	return {};
}

} // namespace TextRecognition
} // namespace Platform