#include "GameManager.h"
//#include "Player.h"
#include <iostream>


Player *GameManager::InitManager(){

Player *newplayer = new Player();

//player = newplayer;

return newplayer;

}


void GameManager::ManageNewPlayer(){

std :: cout << "Manage New Player " << std::endl;
player->SetPlayerName();
player->SetPlayerScore();
player->SetPlayerGameTime();
// std::cout<<"player ::  " << player->GetPlayerName() << " :: " << player->GetPlayerScore() << " :: " <<player->GetPlayerGameTime() << std::endl;



}

void GameManager::DumpDataToFile(Player *p){
    std::cout<<"call the function "<< __FUNCTION__ << std::endl;
    std::cout<<"player ::  " << p->GetPlayerName() << " :: " << p->GetPlayerScore() << " :: " <<p->GetPlayerGameTime() << std::endl;

}