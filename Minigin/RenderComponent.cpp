#include "MiniginPCH.h"
#include "RenderComponent.h"
#include "Renderer.h"
#include "ResourceManager.h"

dae::RenderComponent::RenderComponent(const std::string& filename)
{
	m_Texture = dae::ResourceManager::GetInstance().LoadTexture(filename);
}

void dae::RenderComponent::Render() const
{
	Renderer::GetInstance().RenderTexture(*m_Texture, m_Pos.x, m_Pos.y);
}

void dae::RenderComponent::SetPosition(const Vec3& pos)
{
	m_Pos = pos;
}
