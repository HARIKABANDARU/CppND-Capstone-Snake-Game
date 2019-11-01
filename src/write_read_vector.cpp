#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include <dirent.h>
#include <unistd.h>
#include <sstream>

using std::string;
using std::vector;


const std::string gamaDataDirectory{"/data/"};





vector<string> ReadGameHistory() {

  std::cout<<"CALLED FUNCTION ::  "<<__FUNCTION__<<std::endl;
  
 
  string line;
  string player_name ; //, nr1, nr2, nr3, nr4, nr5, nr6, nr7, nr8, nr9, nr10;
    vector <string> v_player_name;
    vector <int> v_player_score;
    vector <string> v_player_game_time;

    std::ifstream filestream(/*gamaDataDirectory +*/ "game_record.txt");

  if (filestream.is_open()) {
    while (std::getline(filestream, line)) {

      std::istringstream linestream(line);
      while (linestream >> player_name) { //key >>nr1 >>nr2 >>nr3 >>nr4>> nr5>> nr6>> nr7>> nr8>> nr9>> nr10 ) {
      //linestream >> key >>nr1 >>nr2 >>nr3 >>nr4>> nr5>> nr6>> nr7>> nr8>> nr9>> nr10;  
        //if (key == "cpu") {

         v_player_name.push_back(player_name);
         

        }
        
      //return v_player_name;
    
    }
    return v_player_name;
  }
}




int main(){

// int a = 10;
// float b = 9.9;
// string c ="markus";
// string player_time = "Mon Oct 28 21:43:13 2019";

vector <string> test_v;

test_v = ReadGameHistory();

int size_v = test_v.size();

for (int i =0 ; i<size_v; i++){
std::cout<< "v:::" << test_v[i] << std::endl;

}





    return 0;
}