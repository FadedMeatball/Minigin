#pragma once
#include "Transform.h"
#include "SceneObject.h"
#include <memory>
#include <vector>

namespace dae
{
	// make RenderComponent, AudioComponent, ... and use them as data members here
	class Texture2D;
	class RenderComponent;
	class GameObject : public SceneObject
	{
	public:
		void Update() override;
		void Render() const override;

		//void SetTexture(const std::string& filename);
		void SetPosition(float x, float y);
		Vec3 GetPosition() const;
		void AddRenderComp(const std::string& fileName);

		GameObject() = default;
		virtual ~GameObject();
		GameObject(const GameObject& other) = delete;
		GameObject(GameObject&& other) = delete;
		GameObject& operator=(const GameObject& other) = delete;
		GameObject& operator=(GameObject&& other) = delete;

	private:
		Transform m_Transform;
		std::vector<std::shared_ptr<RenderComponent>> m_RenderComponents;
	};
}
