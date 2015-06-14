#include "Object.h"
#include "boost/uuid/uuid_generators.hpp"

using namespace boost;
using namespace uuids;

class GameObject :
	public Object
{
public:
	string name;
	uuid uid;
	random_generator gen;

	GameObject();
	virtual ~GameObject();

	template <typename T> T *GetComponent();
	template <typename T> void AddComponent(T &component);
};