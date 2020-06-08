#pragma once
class FpsCounter
{
public:
	FpsCounter() = default;
	~FpsCounter() = default;
	
	FpsCounter(const FpsCounter & other) = delete;
	FpsCounter(FpsCounter && other) = delete;
	FpsCounter& operator=(const FpsCounter & other) = delete;
	FpsCounter& operator=(FpsCounter && other) = delete;

	void CountFps();
	void SetFrames(float deltaTime);
	float GetFrames() const;
	
private:
	float m_Frames{};
};

