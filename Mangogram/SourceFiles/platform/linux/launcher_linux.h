/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "core/launcher.h"

namespace Platform {

class Launcher : public Core::Launcher {
public:
	Launcher(int argc, char *argv[]);

	int exec() override;

private:
	bool launchUpdater(UpdaterLaunch action) override;

	bool _updating = false;

};

} // namespace Platform
