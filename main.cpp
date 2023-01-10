#include <iostream>
#include "monsters.hpp"
#include "playercreation.hpp"
using namespace std;
//temp option for ending the program
string temporaryOption = "";


//Intro to fight
void combatIntro(){
    cout << "Oh no, it's a fuckin' " << smallOgre.monsterName << ". " << "It has " << smallOgre.monsterHealth << "HP." << endl;
    //cout << "Your health is " << currentPlayerHealth << "." << endl;
    smallOgre;
    player;
    int currentPlayerHealth = player.playerHealth;
    int currentMonsterHealth = smallOgre.monsterHealth;
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
void combatTurn(){
    int currentPlayerHealth;
    while (true)
    {
        combatChoice();
        
        int currentMonsterHealth = smallOgre.monsterHealth;
        cout << "You hit it for " << player.playerDamage << " damage " << "with your " << player.playerWeapon << endl;
        currentMonsterHealth -= player.playerDamage;
        
        cout << "The " << smallOgre.monsterName << " hits you with " << smallOgre.monsterMove1 << "!" << endl;
        cout << "Your health is now " << currentPlayerHealth - smallOgre.monsterDamage << endl;

        if (currentPlayerHealth <= 0 || currentMonsterHealth <= 0){
            break;
        } else {
            cout << "The "  << smallOgre.monsterName << "'s health is " << currentMonsterHealth << endl;
            cout << "Your health is " << currentPlayerHealth << endl;
        }
    }
}


//Combat loop
void combatLoop(){
    
    //add while loop when ready
    combatIntro();
    combatTurn();

    return;
}

int main() {

    //runs the player creation code
    playerCreation();

    int currentPlayerHealth = player.playerHealth;
    //runs combat loop
    combatLoop();

    //Outro
    cout << "You've fought well, but game over. Your experience is: " << player.playerExperience << "." << endl;
    cout << "Type exit to exit." << endl;
    cout << player.playerHealth;
    cin >> temporaryOption;
    return 0;
}