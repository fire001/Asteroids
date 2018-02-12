#pragma once
#ifndef _MATH_HPP_
#define _MATH_HPP_
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>

namespace Math {
	namespace MathUtilities
	{
		const float PI = 3.1415926535897323846f;

		float Converter(int);
		float Round(int);
		float PoweOfTwo(int);
		template<class T> T Clamp(T);
		float ConvertRadToDegrees(float);
		 float ConvertDegreesToRad(float);
		float Distance(double);

		
	};
}
#endif // !_MATH_HPP_