#pragma once
#include "cinder/Channel.h"
#include "cinder/Vector.h"

using namespace ci;

class Particle
{
public:
	Particle();
	Particle(vec2 position);
	Particle(vec2 position, vec2 direction);
	Particle(vec2 position, vec2 direction, float velocity);
	~Particle();

	vec2 GetPosition();
	vec2 GetDirectionVec2();

	float GetVelocity();
	void ApplyForce(vec2 direction);
	void ApplyForce(vec2 direction, float velocity);

	void Update();
	void Draw();

private:
	vec2 m_position;
	vec2 m_direction;
	float m_velocity;
};

