#pragma once
#include "Component.h"
class Transform :
	public Component
{
public:
	Transform();
	virtual ~Transform();

	vec2 position;
};

