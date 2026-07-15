/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Data {
class Session;
struct DrawToReplyRequest;
} // namespace Data

namespace Window {
class SessionController;
} // namespace Window

namespace HistoryView {

[[nodiscard]] QImage ResolveDrawToReplyImage(
	not_null<Data::Session*> data,
	const Data::DrawToReplyRequest &request);

void OpenDrawToReplyEditor(
	not_null<Window::SessionController*> controller,
	QImage image,
	Fn<void(QImage &&)> done);

} // namespace HistoryView
