#pragma once
#include <string>

class Player {
public:
    Player(const std::string& name, int hp, int attack, int x, int y);

    void TakeDamage(int amount);
    int GetHP() const;
    int GetAttack() const;
    std::string GetName() const;
    int GetX() ;
    int GetY() ;
    int SetPosition(int x, int y);
    int Rest() { HP += 5; return HP; } // Simple rest function to regain health

private:
    std::string Name;
    int HP;
    int Attack;
    int X;
    int Y;
};
