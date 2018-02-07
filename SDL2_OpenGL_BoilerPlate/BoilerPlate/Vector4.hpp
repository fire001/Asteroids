#pragma once

#define  Vector3_HPP_
#include <iostream>

namespace Engine
{
	namespace Math
	{
		class Vector4
		{
		public:

			//CONSTRUCTORS

			Vector4();
			Vector4(float uniform);
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

			// por si las moscas 
			float x;
			float y;
			float z;
			float w;


			//PUBLIC FUNCTIONS	
			float Length() const;
			float SquaredLenght() const;
			Vector4 Normalizer();

			
		};
	}
};