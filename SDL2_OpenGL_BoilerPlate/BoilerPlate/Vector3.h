#pragma once
#define  Vector3_H_
#include <iostream>
#include "Vector2.hpp"

namespace Engine
{
	namespace Math
	{
	class Vector3
	{
	public:

		//CONSTRUCTORS

		Vector3();
		Vector3(float uniform);
		Vector3(Engine::Math::Vector2);
		Vector3(float x, float y, float z);


		//OPERATORS	

		Vector3& operator=(const Vector3& rhs);
		Vector3& operator+=(const Vector3& rhs);
		Vector3& operator-=(const Vector3& rhs);
		Vector3& operator*=(const Vector3& rhs);
		Vector3& operator/=(const Vector3& rhs);
		Vector3 operator+(const Vector3& rhs);
		Vector3 operator-(const Vector3& rhs);
		Vector3 operator-();
		Vector3 operator*(const Vector3& rhs);
		Vector3 operator/(const Vector3& rhs);
		bool operator==(const Vector3& rhs);
		bool operator!=(const Vector3& rhs);


		// PUBLIC MEMBERS	

		float m_y;
		float m_x;
		float m_z;
		float m_lenght;



		//PUBLIC FUNCTIONS	
		float Length() const;
		float SquaredLenght() const;
		Vector3 Normalizer();

		// PUBLIC MEMBER 
		float x;
		float y;
		float z;
	};
}
};

