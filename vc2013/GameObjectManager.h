#pragma once
#include "GameObject.h"
#include "Component.h"
#include <list>
#include <unordered_map>
#include <map>
#include <objbase.h>

using namespace boost;
using namespace uuids;
using namespace std;

class GameObjectManager
{
public:
	GameObjectManager();
	virtual ~GameObjectManager();

	list<GameObject> gameObjects;
	map<uuid, Component> componentsByUUID;
	//unordered_map<GUID, Component> componentsByGUID;

	void Setup();
	void Update();
	void Draw();

	static void CreateGameObject(string &name);
	static void DestroyGameObject(string &name);
	template <typename T> static T *GetComponent(GameObject &fromObject);
	template <typename T> static void AddComponent(T &component, GameObject &toObject);

protected:
	random_generator gen;

	friend uuid GenerateUUID(GameObject &gameObject);
};

