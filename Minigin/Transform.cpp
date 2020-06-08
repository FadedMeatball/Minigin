#include "MiniginPCH.h"
#include "Transform.h"

void dae::Transform::SetPosition(const float x, const float y, const float z)
{
	m_Pos.x = x;
	m_Pos.y = y;
	m_Pos.z = z;
}
