#pragma once
//#pragma warning(push)
//#pragma warning (disable:4201)
//#include <glm/vec3.hpp>
//#pragma warning(pop)

#include "Vec3.h"

namespace dae
{
	class Transform final
	{
	public:
		//const glm::vec3& GetPosition() const { return m_Pos; }
		const Vec3& GetPosition() const { return m_Pos; }
		void SetPosition(float x, float y, float z);
	private:
		//glm::vec3 m_Position;
		Vec3 m_Pos;
	};
}
