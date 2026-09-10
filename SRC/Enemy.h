#pragma once
#include <string>

class Enemy
{
    public:
    Enemy(const std::string&name, int hp , int attack, int x, int y);

    void TakeDamage(int amount);
    int GetHP()const;
    int GetAttack()const;
    std::string GetName()const;
    int GetX()const;
    int GetY()const;

    private:
    std::string Name;
    int HP;
    int Attack;
    int X;
    int Y;
};