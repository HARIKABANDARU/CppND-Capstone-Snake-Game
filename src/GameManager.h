#include <iostream>
#include "Player.h"
#include<vector>

using std::vector;

class GameManager
{

public:

   
    GameManager(){
        
        std::cout <<"Init GAME MANAGER" << std::endl;
        
        for (int j=0; j<3;j++){
        player = InitManager();
       ManageNewPlayer(player);
        }
       //DumpDataToFile(player);
       GameManager::temp_print_vector_of_object_pointers (v_player);
    };

    void ManageNewPlayer(Player *player);
    Player *InitManager();
    void DumpDataToFile(Player *player);
    void RetriveDataFromFile();
    void temp_print_vector_of_object_pointers (vector<Player*> v);
    

private:

    Player *player;
     vector<Player*> v_player;

};