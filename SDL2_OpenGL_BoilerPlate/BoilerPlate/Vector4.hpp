#pragma once

#define  Vector4_HPP_
#include <iostream>
#include "Vector2.hpp"
#include "Vector3.h"
namespace Engine
{
	namespace Math
	{
		struct Vector2;
		struct Vector3;
		class Vector4
		{
		public:

			static Vector4 origin;

			//CONSTRUCTORS

			Vector4();
			Vector4(float uniform);
			Vector4(const Vector2&);
			Vector4(const Vector3&);
			Vector4(float x, float y, float z, float w);


			//OPERATORS	

			Vector4& operator=(const Vector4& rhs);
			Vector4& operator+=(const Vector4& rhs);
			Vector4& operator-=(const Vector4& rhs);
			Vector4& operator*=(const Vector4& rhs);
			Vector4& operator/=(const Vector4& rhs);
			Vector4 operator+(const Vector4& rhs);
			Vector4 operator-(const Vector4& rhs);
			Vector4 operator-();
			Vector4 operator*(const Vector4& rhs);
			Vector4 operator/(const Vector4& rhs);
			bool operator==(const Vector4& rhs);
			bool operator!=(const Vector4& rhs);


			// PUBLIC MEMBERS	

			float m_y;
			float m_x;
			float m_z;
			float m_w;
			float m_lenght;
			

			//PUBLIC FUNCTIONS	
			float Length();
			float SquaredLenght();
			Vector4 Normalizer();

			
		};
	}
};