/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/widgets/menu/menu_action.h"

namespace Ui {
class DynamicImage;
} // namespace Ui

namespace Menu {

class ActionWithThumbnail final : public Ui::Menu::Action {
public:
	ActionWithThumbnail(
		not_null<Ui::Menu::Menu*> parent,
		const style::Menu &st,
		not_null<QAction*> action,
		std::shared_ptr<Ui::DynamicImage> thumbnail,
		int thumbnailSize);
	~ActionWithThumbnail();

protected:
	void paintEvent(QPaintEvent *e) override;

private:
	std::shared_ptr<Ui::DynamicImage> _thumbnail;
	int _thumbnailSize = 0;

};

} // namespace Menu
