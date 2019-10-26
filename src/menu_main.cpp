#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <set>

using std::string;
using std::vector;

std::string user_name;
int user_score;

// Sorting
//https://thispointer.com/how-to-sort-a-map-by-value-in-c/

std::map<string, int> sort_user_scores(std::map<string, int> aux_map)
{

    std::map<string, int> sorted_aux_map;

    typedef std::function<bool(std::pair<std::string, int>, std::pair<std::string, int>)> Comparator;

    // Defining a lambda function to compare two pairs. It will compare two pairs using second field
    Comparator compFunctor =
        [](std::pair<std::string, int> elem1, std::pair<std::string, int> elem2) {
            return elem1.second < elem2.second;
        };

    // Declaring a set that will store the pairs using above comparision logic
    std::set<std::pair<std::string, int>, Comparator> set_map(
        aux_map.begin(), aux_map.end(), compFunctor);

    // Iterate over a set using range base for loop
    // It will display the items in sorted order of values
    for (std::pair<std::string, int> element : set_map)
        {std::cout << element.first << " :: " << element.second << std::endl;

        sorted_aux_map.insert(std::make_pair(element.first, element.second));
        }

    return sorted_aux_map;
}



std::map<string, int> players_map;
std::map<string, int>::iterator it;
void get_user_data()
{

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter your name ::" << std::endl;
        std::cin >> user_name;
        std::cout << "score ::" << std::endl;
        std::cin >> user_score;

        players_map.insert(std::make_pair(user_name, user_score));

        // for (it = players_map.begin(); it != players_map.end(); it++)
        // {

        //     std::cout << "name ::" << (*it).first << "  score :: " << (*it).second << std::endl;
        // }
    }
    std::map<string, int> player_sorted_map = sort_user_scores(players_map);

            for (it = player_sorted_map.begin(); it != player_sorted_map.end(); it++)
        {

            std::cout << "name ::" << (*it).first << "  score :: " << (*it).second << std::endl;
        }


}