#include "Player.h"

Player::Player(const std::string& name, int hp, int attack, int x, int y)
    :Name(name), HP(hp), Attack(attack), X(x), Y(y)
{
}  
    
    void Player::TakeDamage(int amount)
    {
        HP-= amount;
        if(HP<0)
        HP=0;
    }

    int Player::GetHP()const
    {
        return HP;
    }

    int Player::GetAttack()const
    {
        return Attack;
    }

    std::string Player::GetName()const
    {
        return Name;
    }

    int Player::GetX()
    {
        return X;
    }

    int Player::GetY()
    {
        return Y;
    }
    int Player::SetPosition(int x, int y)
    {
        X = x;
        Y = y;
        return 0;
    }
    
   