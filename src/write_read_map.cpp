#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <dirent.h>
#include <unistd.h>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <set>

using std::string;
using std::vector;




std::map<string, int>  ReadGameHistoryMap()
{

  std::cout << "CALLED FUNCTION 1 ::  " << __FUNCTION__ << std::endl;

  string line;
  string player_name; 
  int player_score;
  std::map<string, int> players_map;
  std::map<string, int>::iterator it;


  std::ifstream filestream(/*gamaDataDirectory +*/ "game_record.txt");

  if (filestream.is_open())
  {
    while (std::getline(filestream, line))
    {

      std::istringstream linestream(line);
      while (linestream >> player_name >> player_score)
      { 

        players_map.insert(std::make_pair(player_name, player_score));
      }

      //return v_player_name;
    }
    filestream.close();
    return players_map;
  }
}

void WriteGameHistoryMap(std::map<string, int> players_map)
{

  std::map<string, int>::iterator it;

  std::cout << "CALLED FUNCTION ::  2 " << __FUNCTION__ << std::endl;
  int size = players_map.size();
  std::cout << "SIZE ::" << players_map.size() << std::endl;
  std::ofstream dataFile;

  dataFile.open("game_record1.txt", std::ios::in | std::ios::out | std::ios::app);
  if (!dataFile.is_open())
  {
    std::cout << " not possible to open file" << std::endl;
  }
  else
  {


          for (it = players_map.begin(); it != players_map.end(); it++)
        {
            dataFile << "name ::" << (*it).first << "  score :: " << (*it).second << "\n";
        }


    dataFile.close();
  }
  // dataFile.close();
}

int main()
{

  std::map<string, int> test_map;
  std::map<string, int>::iterator it;

  test_map = ReadGameHistoryMap();

  int size_map = test_map.size();

for (it = test_map.begin(); it != test_map.end(); it++)
{
    std::cout << "name ::" << (*it).first << "  score :: " << (*it).second << std::endl;
}

  WriteGameHistoryMap(test_map);

  std::cout << "BACK" << std::endl;

  return 0;
}