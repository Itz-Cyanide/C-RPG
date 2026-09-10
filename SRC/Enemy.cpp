#include "Enemy.h"

Enemy::Enemy(const std::string& name, int hp, int attack, int x, int y)
    : Name(name), HP(hp), Attack(attack), X(x), Y(y)
{
}

void Enemy::TakeDamage(int amount)
{
    HP -= amount;
    if (HP < 0)
        HP = 0;
}

int Enemy::GetHP() const
{
    return HP;
}

int Enemy::GetAttack() const
{
    return Attack;
}

std::string Enemy::GetName() const
{
    return Name;
}

int Enemy::GetX() const
{
    return X;
}

int Enemy::GetY() const
{
    return Y;
}
