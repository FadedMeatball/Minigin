#pragma once

namespace dae
{
	struct Vec3
	{
	public:
		Vec3(const float xValue, const float yValue, const float zValue) : x{xValue}, y{yValue}, z{zValue} {}
		Vec3() : x{}, y{}, z{} {}

		float x, y, z;
	};
}