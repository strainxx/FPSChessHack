#pragma once
#include "SDK.hpp"

namespace Settings {
	bool esp = false;
	float color[3] = { 1.0f, 1.0f, 1.0f };
	bool tracers = false;
	bool name = false;

	bool aim = false;
	int aim_fov = 60;
	int aim_oy = 0;
}
