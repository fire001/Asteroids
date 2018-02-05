#pragma once

#include <math.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
namespace Math {
	class MathUtilities
	{
	public:
		float intToFloat;
		int floatToInt;

		MathUtilities();
		~MathUtilities();

		float Converter(int);
		float Round(int);
		float PoweOfTwo(int);
		template<class T> T Clamp(T);
		float Angle(double);
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