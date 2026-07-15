/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#include "platform/mac/integration_mac.h"

#include "platform/platform_integration.h"

namespace Platform {
namespace {

class MacIntegration final : public Integration {
};

} // namespace

std::unique_ptr<Integration> CreateIntegration() {
	return std::make_unique<MacIntegration>();
}

} // namespace Platform
