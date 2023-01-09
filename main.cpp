#include <iostream>
#include "playercreation.hpp"
#include "monsters.hpp"
using namespace std;



int main() {

    cout << smallOgre.monsterName;
    //creates a player from the player object
    Player player;
    //runs the player creation code
    player.playerCreation();


    std::cout << player.playerRace;

// Combat choices
    cout << "What would you like to do?" << endl;

    std::cout << "1. Attack 2. Defend 3. Potion 4. Player Info" << std::endl;

    switch (playerOption()) {
        case 1:
            cout << "You chose to attack." << endl;
            break;
        case 2: 
            cout << "You chose to defend." << endl;
            break;
        case 3:
            cout << "You chose to use a potion." << endl;
            break;
        case 4:
            player.playerInfo();
            break;
        default:
            cout << "You input the wrong thing, try again!" << endl;
    }
    return 0;
}