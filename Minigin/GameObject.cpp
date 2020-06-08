#include "MiniginPCH.h"
#include "GameObject.h"
#include "ResourceManager.h"
#include "Renderer.h"
#include "RenderComponent.h"

dae::GameObject::~GameObject() = default;

void dae::GameObject::Update(){}

void dae::GameObject::Render() const
{
	for(const auto component : m_RenderComponents)
	{
		component->Render();
	}
}

void dae::GameObject::SetPosition(float x, float y)
{
	for (const auto component : m_RenderComponents)
	{
		component->SetPosition(Vec3{x, y, 0});
	}

	//m_Transform.SetPosition(x, y, 0.0f);
}

void dae::GameObject::AddRenderComp(const std::string& fileName)
{
	m_RenderComponents.push_back(std::make_shared<RenderComponent>(fileName));
}

dae::Vec3 dae::GameObject::GetPosition() const
{
	return m_Transform.GetPosition();
}