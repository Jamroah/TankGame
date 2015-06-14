#include "Particle.h"


Particle::Particle()
{
	m_position = vec2(0, 0);
	m_direction = vec2(0, 0);
	m_velocity = 0.0;
}

Particle::Particle(vec2 position)
{
	m_position = position;
	m_direction = vec2(0, 0);
	m_velocity = 0.0;
}

Particle::Particle(vec2 position, vec2 direction)
{
	m_position = position;
	m_direction = direction;
	m_velocity = 0.0;
}

Particle::Particle(vec2 position, vec2 direction, float velocity)
{
	m_position = position;
	m_direction = direction;
	m_velocity = velocity;
}

Particle::~Particle()
{

}

vec2 Particle::GetPosition()
{
	return m_position;
}

vec2 Particle::GetDirectionVec2()
{
	return m_direction;
}

float Particle::GetVelocity()
{
	return m_velocity;
}

void Particle::ApplyForce(vec2 direction)
{

}

void Particle::ApplyForce(vec2 direction, float velocity)
{

}

void Particle::Update()
{
	m_position = m_direction * m_velocity;
}

void Particle::Draw()
{

}
