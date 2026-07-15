/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "data/stickers/data_stickers.h"

class DocumentData;

namespace ChatHelpers {
class Show;
} // namespace ChatHelpers

namespace Ui {
class GenericBox;
} // namespace Ui

namespace Api {

void OpenCreateStickerFlow(
	std::shared_ptr<ChatHelpers::Show> show,
	StickerSetIdentifier set,
	Fn<void(MTPmessages_StickerSet)> done = nullptr);

void OpenCreateEmojiFlow(
	std::shared_ptr<ChatHelpers::Show> show,
	StickerSetIdentifier set,
	Fn<void(MTPmessages_StickerSet)> done = nullptr);

[[nodiscard]] bool AdaptStickerToEmoji(
	std::shared_ptr<ChatHelpers::Show> show,
	StickerSetIdentifier set,
	not_null<DocumentData*> document,
	Fn<void(MTPmessages_StickerSet)> done = nullptr);

} // namespace Api
