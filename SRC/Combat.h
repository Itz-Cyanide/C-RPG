#pragma once
#include "Player.h"
#include "Enemy.h"

class Combat {
public:
    static void PlayerAttack(Player& player, Enemy& enemy);
    static void EnemyAttack(Enemy& enemy, Player& player);
};
