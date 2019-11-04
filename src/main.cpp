#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "menu_main.cpp"
#include "GameManager.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  bool start_game;
  start_game = false;

  // do{
  // GameManager gm;
  // start_game = gm.InitManager();
  // } while (start_game==true);

  while(start_game ==false){
 GameManager gm;
  start_game = gm.InitManager();

  }


 std::cout<<"begin the game"<<std::endl;
  

  //get_user_data();



  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  return 0;
}