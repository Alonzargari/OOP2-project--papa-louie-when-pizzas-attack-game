#include "DesignPatterns/Singletons/GameCollisions.h"
#include "GameObject/StaticObject/Obstacle.h"
#include "GameObject/MovingObject/Player.h"

/*================== instance =================*/
GameCollisions& GameCollisions::instance()
{
	static GameCollisions instance;
	return instance;
}

/*================== addCollusionFunc =================*/
void GameCollisions::addCollusionFunc(std::type_index object1, std::type_index object2, HitFunctionPtr func)
{
	m_collideMap[Key(object1, object2)] = func;
}

/*================== CollusionFunc =================*/
HitFunctionPtr GameCollisions::CollusionFunc(const std::type_index& object1, const std::type_index& object2)
{
	auto it = m_collideMap.find(std::make_pair(object1, object2));
	if (it == m_collideMap.end()) 
	{
		return nullptr;
	}
	return it->second;
}