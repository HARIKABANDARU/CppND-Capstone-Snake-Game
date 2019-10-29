#include <iostream>
#include <string>

using std::string;

class Player
{

public:

    
    Player(){ std::cout<<"--- New Player --- "<< std::endl;};
    Player(string,int, string);
    ~Player(){};

    string GetPlayerName();
    int GetPlayerScore();
    string GetPlayerGameTime();
    
    void SetPlayerName();
    void SetPlayerScore();
    void SetPlayerGameTime();

private:
    string player_name;
    int player_score;
    string player_game_time;
};
