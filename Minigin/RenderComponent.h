#pragma once
#include "Component.h"
#include "Vec3.h"

namespace dae
{
	class Texture2D;
	class RenderComponent : public Component
	{
	public:
		RenderComponent(const std::string& filename);
		virtual ~RenderComponent() = default;
		RenderComponent(const RenderComponent& other) = delete;
		RenderComponent(RenderComponent&& other) = delete;
		RenderComponent& operator=(const RenderComponent& other) = delete;
		RenderComponent& operator=(RenderComponent&& other) = delete;

		void Render() const;
		void SetPosition(const Vec3& pos);
		
	private:
		std::shared_ptr<Texture2D> m_Texture;
		Vec3 m_Pos;
	};

}
