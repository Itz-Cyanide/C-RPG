#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Combat.h"
#include <string>

int main()
{
    bool running = true;

     std::cout << "Welcome to the game!\n";
        std::string playerName;
        std::cout << "Enter your player's name: ";
        std::getline(std::cin, playerName);

        Player player(playerName, 30, 8, 0, 0);
        Enemy enemy("Goblin", 20, 5, 1, 1);



    while(running)
    {
      


        std::cout << "\nPlayer " << player.GetName() << " stats are: "
        << player.GetHP() << " HP and " << player.GetAttack() << " attack power.\n";
    
        std::string action;
        std::cout << "\nWould you like to move, rest, or exit? (move/rest/exit): ";
        std::getline(std::cin, action);

    
    
        if(action == "move")
        {
            std::cout << "Enter new X coordinate: ";
            int newX;
            std::cin >> newX;
            std::cout << "Enter new Y coordinate: ";
            int newY;
            std::cin >> newY;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            player.SetPosition(newX, newY);
            std::cout << "Player moved to (" << player.GetX() << ", " << player.GetY() << ").\n";
        }
        else if(action == "rest")
        {
            std::cout << "Player rests and regains some health.\n";
            player.Rest();
            std::cout << "Player HP: " << player.GetHP() << "\n";
        }
        else if(action == "exit")
        {
            std::cout << "Exiting the game. Goodbye!\n";
            running = false;
            return 0;
        }
        else
        {
            std::cout << "Invalid action. Please choose move, rest, or exit.\n";
        }
    
        
        //Fighting logic
        if(player.GetX() == enemy.GetX() && player.GetY() == enemy.GetY())
        {
        std::cout << "\nYou have encountered a " << enemy.GetName() << "!\n";
         while (player.GetHP() > 0 && enemy.GetHP() > 0)
        {   
        Combat::PlayerAttack(player, enemy);

        if (enemy.GetHP() <= 0)
        {
            std::cout << enemy.GetName() << " has been defeated!\n";
            break;
            }

            Combat::EnemyAttack(enemy, player);

            if (player.GetHP() <= 0)
            {
            std::cout << player.GetName() << " has been defeated!\n";
            break;
            }

            std::cout << "Player HP: " << player.GetHP()
                  << " | Enemy HP: " << enemy.GetHP() << "\n\n";
        }

         return 0;
        }
       
    
    
    
    
    
    
    
    }
    
    

    

}







