#pragma once
#include <memory>
#include <string>
#include "Component.h"

namespace dae
{
	class Font;
	class TextComponent : public Component
	{
	public:
		explicit TextComponent(/*const std::string& text, const std::shared_ptr<Font>& font*/) = default;
		virtual ~TextComponent() = default;
		TextComponent(const TextComponent & other) = delete;
		TextComponent(TextComponent && other) = delete;
		TextComponent& operator=(const TextComponent & other) = delete;
		TextComponent& operator=(TextComponent && other) = delete;

		void Render();
		
	};
}
