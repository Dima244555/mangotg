/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace TdE2E {

struct UserId;
struct PublicKey;

[[nodiscard]] UserId MakeUserId(not_null<UserData*> user);
[[nodiscard]] UserId MakeUserId(::UserId id);

[[nodiscard]] MTPint256 PublicKeyToMTP(const PublicKey &key);

} // namespace TdE2E
