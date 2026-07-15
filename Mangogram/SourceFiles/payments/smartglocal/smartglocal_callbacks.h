/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include <functional>

namespace SmartGlocal {

class Token;
class Error;

using TokenCompletionCallback = std::function<void(Token, Error)>;

} // namespace SmartGlocal
