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
#include "DataManager.h"





int main()
{
  DataManager dm;
  std::map<string, int> test_map;
  

  test_map = dm.ReadGameHistoryMap();
  dm.DisplaySortedPlayers(test_map);

  

std::cout<<"-----------------------------------------------------"<<std::endl;


  dm.WriteGameHistoryMapSorted(test_map);
  dm.WriteGameHistoryMap(test_map);

 

  return 0;
}