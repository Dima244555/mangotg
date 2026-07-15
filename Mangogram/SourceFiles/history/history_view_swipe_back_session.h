/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class WindowListDelegate;

namespace HistoryView {
class ListWidget;
} // namespace HistoryView

namespace Ui {
class RpWidget;
class ElasticScroll;
} // namespace Ui

namespace Window {

class SectionWidget;

void SetupSwipeBackSection(
	not_null<Ui::RpWidget*> parent,
	not_null<Ui::ElasticScroll*> scroll,
	not_null<HistoryView::ListWidget*> list);

} // namespace Window
