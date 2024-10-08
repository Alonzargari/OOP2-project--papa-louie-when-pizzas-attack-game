#pragma region Includes
#include "DesignPatterns/States/PizzaEnemyStates/PizzaEnemyState.h"
#include "DesignPatterns/Singletons/ResourceManager.h"
#include "GameObject/MovingObject/PizzaEnemy.h"
#pragma endregion 

/*================== PizzaEnemyState Constructor =================*/
PizzaEnemyState::PizzaEnemyState(const ObjectAnimation animation, const sf::Time frameTimer) :
	m_animation(ResourceManager::instance().getAnimation(animation)), m_animationTime(frameTimer), m_frame(0)
{}


/*================== setAnimationFrame =================*/
bool PizzaEnemyState::setAnimationFrame(PizzaEnemy& pizzaEnemy, const sf::Time delta)
{
	m_elapsed += delta;
	if (m_elapsed >= m_animationTime)
	{
		m_elapsed -= m_animationTime;
		++m_frame;
		m_frame %= m_animation.size();
		pizzaEnemy.setTextureRect(m_animation[m_frame]);
	}
	return m_frame == m_animation.size() - 1;
}