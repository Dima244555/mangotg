/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#include "core/launcher.h"

int main(int argc, char *argv[]) {
	const auto launcher = Core::Launcher::Create(argc, argv);
	return launcher ? launcher->exec() : 1;
}
