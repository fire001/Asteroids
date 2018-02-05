#pragma once

#ifndef Vector2_HPP_
#define Vector2_HPP_

#include <iostream>

namespace Engine
{
	namespace MathUtilities
	{
		class Vector2
		{
		public:
			/*============================
			*		  STATIC
			============================*/
			static Vector2 origin;

			//CONSTRUCTORS

			Vector2();
			Vector2(float uniform);
			Vector2(float x, float y);


			//OPERATORS	

			Vector2& operator=(const Vector2& rhs);
			Vector2& operator+=(const Vector2& rhs);
			Vector2& operator-=(const Vector2& rhs);
			Vector2& operator*=(const Vector2& rhs);
			Vector2& operator/=(const Vector2& rhs);
			Vector2 operator+(const Vector2& rhs);
			Vector2 operator-(const Vector2& rhs);
			Vector2 operator-();
			Vector2 operator*(const Vector2& rhs);
			Vector2 operator/(const Vector2& rhs);
			bool operator==(const Vector2& rhs);
			bool operator!=(const Vector2& rhs);
			friend  Vector2 operator*(float, const Vector2&);
			friend  Vector2 operator*(const Vector2&, float);


			// PUBLIC MEMBERS	

			float m_y;
			float m_x;
			float m_lenght;



			//PUBLIC FUNCTIONS	
			float Length() const;
			float SquaredLenght() const;
			Vector2 Normalizer();
		};
	}
}
#endif