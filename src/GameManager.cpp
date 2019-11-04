#include "GameManager.h"
#include "DataManager.h"
//#include "Player.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <dirent.h>
#include <unistd.h>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <set>


//Player *GameManager::InitManager(){
bool GameManager::InitManager(){

int key_pressed;

std::cout<<" ### WELCOME TO SNAKE GAME ###" <<std::endl;
std::cout<<"   " <<std::endl;
std::cout<<" 1. Start New Game" <<std::endl;
std::cout<<" 2. Top 10 scores" <<std::endl;
std::cout<<" 3. QUIT" <<std::endl;
std::cout<<"your choice --> ";
std::cin>>key_pressed;

switch (key_pressed){

    case 1:
    {

    Player *newplayer = new Player();
    ManageNewPlayer(newplayer);
    return true;

    };
    break;

    case 2:
    {
    DataManager dm;
    std::map<string, int> recorded_players;
    recorded_players = dm.ReadGameHistoryMap();
    dm.DisplaySortedPlayers(recorded_players);
    return false;

    };
    break;
    case 3:
    {
std::cout<<"quiting the game ... Thanks"<<std::endl;
    exit(0);
    };
   

}





//player = newplayer;
//v_player.push_back(newplayer);

//return newplayer;


}


void GameManager::ManageNewPlayer(Player *p){

//std :: cout << "Manage New Player " << std::endl;
p->SetPlayerName();
//p->SetPlayerScore();
//p->SetPlayerGameTime();
// std::cout<<"player ::  " << player->GetPlayerName() << " :: " << player->GetPlayerScore() << " :: " <<player->GetPlayerGameTime() << std::endl;



}

void GameManager::DumpDataToFile(Player *p){
    
    std::cout<<"call the function "<< __FUNCTION__ << std::endl;
      
    std::cout<<"player ::  " << p->GetPlayerName() << " :: " << p->GetPlayerScore() << " :: " <<p->GetPlayerGameTime() << std::endl;

}

void GameManager::temp_print_vector_of_object_pointers (vector<Player*> v_player){

        int v_player_size =v_player.size();

    for (int i = 0; i< v_player_size; i++ ){
    std::cout<<"----------------------------------------------------------------"<<std::endl;
   // std::cout<<"player vector::  " << v_player[0]->GetPlayerName() << std::endl;
   // std::cout<<"player vector::  " << v_player[1]->GetPlayerName() << std::endl;
    std::cout<<"player vector::  " << v_player[i]->GetPlayerName() << std::endl;
    }
    
     //" :: " << p->GetPlayerScore() << " :: " <<p->GetPlayerGameTime() << std::endl;

    //}


}