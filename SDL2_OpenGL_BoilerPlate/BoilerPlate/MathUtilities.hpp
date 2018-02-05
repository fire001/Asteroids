#pragma once
#ifndef _MATH_HPP_
#define _MATH_HPP_
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>

namespace Math {
	class MathUtilities
	{
	public:
		float intToFloat;
		int floatToInt;

		const float PI = 3.1415926535897323846f;

		MathUtilities();
		~MathUtilities();

		float Converter(int);
		float Round(int);
		float PoweOfTwo(int);
		template<class T> T Clamp(T);
		float ConvertRadToDegrees(float);
		float ConvertDegreesToRad(float);
		float Distance(double);

	private:
		//Members

		int redondear;
		int num;
		int IntToFloat;
		//float floatToInt;
		double radians;
		double degree;
		double x;
	};
}
#endif // !_MATH_HPP_