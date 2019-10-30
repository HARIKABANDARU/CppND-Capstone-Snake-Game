#include "GameManager.h"
//#include "Player.h"
#include <iostream>


Player *GameManager::InitManager(){


Player *newplayer = new Player();

//player = newplayer;
v_player.push_back(newplayer);

return newplayer;


}


void GameManager::ManageNewPlayer(Player *p){

std :: cout << "Manage New Player " << std::endl;
p->SetPlayerName();
p->SetPlayerScore();
p->SetPlayerGameTime();
// std::cout<<"player ::  " << player->GetPlayerName() << " :: " << player->GetPlayerScore() << " :: " <<player->GetPlayerGameTime() << std::endl;



}

void GameManager::DumpDataToFile(Player *p){
    
    std::cout<<"call the function "<< __FUNCTION__ << std::endl;
      
    std::cout<<"player ::  " << p->GetPlayerName() << " :: " << p->GetPlayerScore() << " :: " <<p->GetPlayerGameTime() << std::endl;

}

void GameManager::temp_print_vector_of_object_pointers (vector<Player*> v_player){

        int v_player_size =v_player.size();

   // for (int i = 0; i< v_player_size; i++ ){
    std::cout<<"----------------------------------------------------------------"<<std::endl;
    std::cout<<"player vector::  " << v_player[0]->GetPlayerName() << std::endl;
    std::cout<<"player vector::  " << v_player[1]->GetPlayerName() << std::endl;
    std::cout<<"player vector::  " << v_player[2]->GetPlayerName() << std::endl;
    
    
     //" :: " << p->GetPlayerScore() << " :: " <<p->GetPlayerGameTime() << std::endl;

    //}


}