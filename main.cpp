#include <iostream>
#include "monsters.hpp"
#include "playercreation.hpp"
using namespace std;

string temporaryOption = "";

void playerCreationInsert(){
    Player player{"","","","",0,0,0,0};
    player.playerCreation();
    return;
}

 int currentPlayerHealth = player.playerHealth;
 int currentMonsterHealth = smallOgre.monsterHealth;  



//Intro to fight
void combatIntro(){
    cout << "Oh no, it's a fuckin' " << smallOgre.monsterName << ". " << "It has " << smallOgre.monsterHealth << "HP." << endl;
    cout << "Your health is " << currentPlayerHealth << "." << endl;
    return;
}

// Combat choices

void combatChoice(){
    

    cout << "What would you like to do?" << endl;
    cout << "1. Attack 2. Defend 3. Potion" << endl;
    int playerOption = 0;
    std::cin >> playerOption;    

    switch (playerOption) {
        case 1:
            cout << "You chose to attack." << endl;
            break;
        case 2: 
            cout << "You chose to defend." << endl;
            break;
        case 3:
            cout << "You chose to use a potion." << endl;
            break;
        default:
            cout << "You input the wrong thing, try again!" << endl;
    }
    return;
}

//Monster Turn
void monsterTurn(){
    cout << "You hit it for " << player.playerDamage << "damage!" << endl;
    currentMonsterHealth -= player.playerDamage;
    cout << "The " << smallOgre.monsterName << " hits you with " << smallOgre.monsterMove1 << "!" << endl;

}


//Combat loop
void combatLoop(){
    

    combatIntro();
    combatChoice();

    return;
}

int main() {
    //creates a player from the Player object    
    //Player player;
    //runs the player creation code
    //player.playerCreation();

    playerCreationInsert();
    //runs combat loop
    combatLoop();

    
    cout << "You've fought well, but game over. Your experience is: " << player.playerExperience << "." << endl;
    cout << "Type exit to exit." << endl;
    cout << player.playerHealth;
    cin >> temporaryOption;
    return 0;
}