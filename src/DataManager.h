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


class DataManager {

public:

vector<string> ReadGameHistory();
std::map<string, int> SortGameHistory();
void WriteGameHistory(vector<string> v_new_player_name);
void DisplayData();

private:


}


const std::string gamaDataDirectory{"/data/"};

vector<string> ReadGameHistory()
{

  std::cout << "CALLED FUNCTION 1 ::  " << __FUNCTION__ << std::endl;

  string line;
  string player_name; //, nr1, nr2, nr3, nr4, nr5, nr6, nr7, nr8, nr9, nr10;
  vector<string> v_player_name;
  vector<int> v_player_score;
  vector<string> v_player_game_time;

  std::ifstream filestream(/*gamaDataDirectory +*/ "game_record.txt");

  if (filestream.is_open())
  {
    while (std::getline(filestream, line))
    {

      std::istringstream linestream(line);
      while (linestream >> player_name)
      { //key >>nr1 >>nr2 >>nr3 >>nr4>> nr5>> nr6>> nr7>> nr8>> nr9>> nr10 ) {
        //linestream >> key >>nr1 >>nr2 >>nr3 >>nr4>> nr5>> nr6>> nr7>> nr8>> nr9>> nr10;
        //if (key == "cpu") {

        v_player_name.push_back(player_name);
      }

      //return v_player_name;
    }
    filestream.close();
    return v_player_name;
  }
}

void WriteGameHistory(vector<string> v_player_name_temp)
{
  std::cout << "CALLED FUNCTION ::  2 " << __FUNCTION__ << std::endl;
  int size = v_player_name_temp.size();
  std::cout << "SIZE ::" << v_player_name_temp.size() << std::endl;
  std::ofstream dataFile;

  dataFile.open("game_record1.txt", std::ios::in | std::ios::out | std::ios::app);
  if (!dataFile.is_open())
  {
    std::cout << " not possible to open file" << std::endl;
  }
  else
  {
    for (int j = 0; j < size; ++j)
    {

      dataFile << v_player_name_temp[j] << "\n";
    }

    dataFile.close();
  }
  // dataFile.close();
}

int main()
{

  vector<string> test_v;

  test_v = ReadGameHistory();

  int size_v = test_v.size();

  for (int i = 0; i < size_v; i++)
  {
    std::cout << "v:::" << test_v[i] << std::endl;
  }
  //std::cout << "SIZE ::" << test_v.size() << std::endl;
  WriteGameHistory(test_v);

  std::cout << "BACK" << std::endl;

  return 0;
}