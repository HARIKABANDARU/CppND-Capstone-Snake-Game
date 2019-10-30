#include <iostream>
#include "Player.h"

class GameManager
{

public:
    GameManager(){
        std::cout <<"Init GAME MANAGER" << std::endl;
        player = InitManager();
       ManageNewPlayer();
       DumpDataToFile(player);
    };

    void ManageNewPlayer();
    Player *InitManager();
    void DumpDataToFile(Player *player);
    void RetriveDataFromFile();
    

private:

    Player *player;

};