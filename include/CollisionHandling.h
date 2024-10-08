#pragma once
#include "GameObject/GameObject.h"

void initCollisionFunctions();
void playerObstacle(GameObject&, GameObject&);
void enemyObstacle(GameObject&, GameObject&);
void pizzaEnemyObstacle(GameObject&, GameObject&);
void PlayerStaticBomb(GameObject&, GameObject&);
void PlayerHeart(GameObject&, GameObject&);
void PlayerCoins(GameObject&, GameObject&);
void saltBombObstacle(GameObject&, GameObject&);
void cheeseBulletObstacle(GameObject&, GameObject&);
void playerCheeseBullet(GameObject&, GameObject&);
void enemySaltBomb(GameObject&, GameObject&);
void pizzaEnemySaltBomb(GameObject&, GameObject&);
void playerEnemy(GameObject&, GameObject&);
void playerPizza(GameObject&, GameObject&);
void playerFatMan(GameObject&, GameObject&);
void playerLadder(GameObject&, GameObject&);
void friendCage(GameObject&, GameObject&);
void friendObstacle(GameObject&, GameObject&);

sf::Sprite proccessExplotion(const sf::Vector2f&);