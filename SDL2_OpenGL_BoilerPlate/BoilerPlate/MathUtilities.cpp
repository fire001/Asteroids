#include "MathUtilities.hpp"
#include <iostream>


namespace Math {
	MathUtilities::MathUtilities()
	{
	}


	MathUtilities::~MathUtilities()
	{
	}

	float MathUtilities::Converter(int)
	{
		IntToFloat = (float)roundf(floatToInt);
		std::cout << IntToFloat << std::endl;
		return IntToFloat;
	}


	float MathUtilities::Round(int)
	{
		redondear = round(x / 2) * 2;
		return 0.0f;
	}

	float MathUtilities::PoweOfTwo(int)
	{
		while (((num % 2) == 0) && num > 1)
			num /= 2;
		return (num == 1);
	}


	template<class T>
	T MathUtilities::Clamp(T)
	{

		int max = 255, min = 0;
		int clamp;
		clamp = x < min ? min : x;
		return clamp > max ? max : clamp;
	}


	float MathUtilities::Angle(double)
	{

		// degree to radian
		float degree, radian;
		radian = (degree*3.14) / 180;
		std::cout << "radian:" << radian;
		//radian to degree
		degree = (radian * 180) / 3.14;
		std::cout << "degree:" << degree;

		return radian;
	}

	float MathUtilities::Distance(double)
	{
		return 0.0;
	}
}

