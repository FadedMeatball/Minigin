#pragma once
#include "FpsCounter.h"
#include <memory>

struct SDL_Window;
namespace dae
{
	class TextObject;
	class Minigin
	{
	public:
		void Initialize();
		void LoadGame();
		void Cleanup();
		void Run();
	private:
		static const int MsPerFrame = 16; //16 for 60 fps, 33 for 30 fps
		SDL_Window* m_Window{};
		FpsCounter m_FpsCounter{};
		//float m_Frames;

		std::shared_ptr<TextObject> m_Frames;
		
	};
}