#include "MiniginPCH.h"
#include "FpsCounter.h"
#include "iostream"
#include <chrono>

void FpsCounter::CountFps()
{
    float frames{};
	
    auto start = std::chrono::steady_clock::now();
    //while (canGoOn)
    {
        ++frames;
        auto now = std::chrono::steady_clock::now();
        auto diff = now - start;
        auto end = now + std::chrono::milliseconds(16);
        if (diff >= std::chrono::seconds(1))
        {
            start = now;
            m_Frames += frames;
            //std::cout << frames << "\n";
            frames = 0;
        }
    }
}

void FpsCounter::SetFrames(float deltaTime)
{
    m_Frames = deltaTime;
}

float FpsCounter::GetFrames() const
{
    return m_Frames;
}
