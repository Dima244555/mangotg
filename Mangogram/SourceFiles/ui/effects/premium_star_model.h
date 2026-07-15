/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include <vector>

namespace Ui::Premium {

struct StarModel {
	std::vector<float> vertices;
	int vertexCount = 0;

	[[nodiscard]] bool isNull() const {
		return vertices.empty();
	}
};

[[nodiscard]] StarModel LoadStarModel();

} // namespace Ui::Premium
