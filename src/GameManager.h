#include <iostream>
#include "Player.h"

class GameManager
{

public:
    GameManager(){
        std::cout <<"Init GAME MANAGER" << std::endl;
        player = InitManager();
    };

    void ManageNewPlayer();
    Player *InitManager();
    void DumpDataToFile();
    void RetriveDataFromFile();
    

private:

    Player *player;

};