#include "Combat.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>


void Combat::PlayerAttack(Player& player, Enemy& enemy)
{
    enemy.TakeDamage(player.GetAttack());
    std::cout << player.GetName() << " hits " << enemy.GetName()
              << " for " << player.GetAttack() << " damage!\n";
}

void Combat::EnemyAttack(Enemy& enemy, Player& player)
{
    player.TakeDamage(enemy.GetAttack());
    std::cout << enemy.GetName() << " hits " << player.GetName()
              << " for " << enemy.GetAttack() << " damage!\n";
}
