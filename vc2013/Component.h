#include "Object.h"

class Component : 
	public Object
{
public:
	Component();
	virtual ~Component();
	void Update();
	void Draw();
};

