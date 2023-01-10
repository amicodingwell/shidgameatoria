#include <iostream>
#include "monsters.hpp"
#include <ctime>
using namespace std;

int potions = 3;
int currentPotions = potions;
class Player {
    public:
    string playerName = "";
    string playerRace = "";
    string playerClass = "";
    string playerWeapon = "";
    float playerHealth = 0;
    int playerDamage = 0;
    int playerDefence = 0;
    int playerExperience = 0;
    float currentPlayerHealth= playerHealth;
};

Player player;

//Rest, potions, wander function

void rpwFunc(){

    std::cout << "Status: " << endl;
    std::cout << "Name: " << player.playerName << " Race: " << player.playerRace << " Class: " << player.playerClass << " HP: " << player.currentPlayerHealth << " ATK: " << player.playerDamage << " DEF: " << player.playerDefence << " EXP: " << player.playerExperience << endl;
    std::cout << "You find yourself being able to choose between 1. Resting (Heal 40% hp) or 2. Collecting 3 potions" << endl;
    int playerOption = 0;
    std::cin >> playerOption; 
    if (playerOption == 1){
        player.currentPlayerHealth += player.playerHealth / 100 * 40;
        if (player.currentPlayerHealth >= player.playerHealth){
            player.currentPlayerHealth = player.playerHealth;
            std::cout << "You feel rested, you go for a wander." << endl;
        }else{            
            std::cout << "You feel rested, but still a bit wounded. You go for a wander." << endl;
        }
    } else if (playerOption == 2){
        currentPotions += 3;
        std::cout << "You have " << currentPotions << " potions. You go for a wander." << endl;
    } else {
        std::cout << "Have it your way." << endl;
    }           
    
}

void combatFunc(){
    int playerOption = 0;
    //float currentPlayerHealth = player.playerHealth;
    float currentMonsterHealth = smallOgre.monsterHealth;
    float combatMonsterDamage = 0;
    float combatPlayerDamage = 0;

    std::cout << "Oh shit it's a " << smallOgre.monsterName << endl;
    std::cout << "You have " << player.currentPlayerHealth << " HP. What will you do?" << endl;

    do {
        std::cout << "Would you like to 1. Attack 2. Defend 3. Potion 4. Status";
        std::cin >> playerOption;
        switch (playerOption){
        case 1:
            std::cout << "You attack the enemy for " << (player.playerDamage / smallOgre.monsterDefence) << " damage." << endl;
            combatPlayerDamage = (player.playerDamage / smallOgre.monsterDefence);
            currentMonsterHealth -= combatPlayerDamage;
            std::cout << smallOgre.monsterName << "'s health is " << currentMonsterHealth << endl;

            std::cout << "You take " << (player.playerDefence / smallOgre.monsterDamage) << " damage." << endl;
            combatMonsterDamage = (smallOgre.monsterDamage / player.playerDefence);
            player.currentPlayerHealth -= combatMonsterDamage;
            std::cout << "Your health is " << player.currentPlayerHealth << "." << endl;
            break;

        case 2:
            //std::cout << "You defend from the enemy's attack. You take " << currentPlayerHealth - player.playerHealth + (p) << " damage." << endl;
            player.currentPlayerHealth -= (player.playerDefence - (smallOgre.monsterDamage / 0.5));
            std::cout << "You defend from the enemy's attack." << endl;
            std::cout << "Your health is " << player.currentPlayerHealth << "." << endl;
            break;

        case 3:
            if (currentPotions > 0) {
                if(player.currentPlayerHealth >= player.playerHealth){
                    player.currentPlayerHealth = player.playerHealth;
                    cout << "You have overhealed." << endl;
                    break;
                } else {
                    std::cout << "You drink a potion and feel refreshed!" << endl;
                    player.currentPlayerHealth += 10;
                    currentPotions -= 1;                    
                    std::cout << "Your health is now: " << player.currentPlayerHealth << endl;
                    break;
                }
            } else {
                std::cout << "No potions!" << endl;
            }
            break;

        case 4:
            std::cout << "Status: " << endl;
            std::cout << "Name: " << player.playerName << " Race: " << player.playerRace << " Class: " << player.playerClass << " HP: " << player.currentPlayerHealth << " ATK: " << player.playerDamage << " DEF: " << player.playerDefence << " EXP: " << player.playerExperience << endl;
            break;
        default:
            std::cout << "Try a correct option!" << endl;
            break;
        }
    }
    while (player.currentPlayerHealth > 0 && currentMonsterHealth > 0);

}

int main() {
    
    std::cout << "Hello, welcome to Shidgameatoria." << endl;
// Select your player name    
    std::cout << "Please tell us your name." << endl;
    std::getline(std::cin, player.playerName);
    std::cout << "Oh, your name is " << player.playerName << "..." << endl;

// Select your race

    std::cout << "What race are you? \n" << "1.Dog 2.Cat 3.Nothing" << endl;
            
        while (true){
            int playerOption = 0;
            cin >> playerOption;
            switch (playerOption) {
                case 1:
                    std::cout << "Ah so you are a Dog lmao." << endl;
                    player.playerRace = "Dog";
                    player.playerHealth += 10;
                    player.playerDamage += 10;           
                    player.playerDefence += 5;            
                    break;
                case 2:
                    std::cout << "Ah so you are a Cat... Gross." << endl;
                    player.playerRace = "Cat";
                    player.playerHealth += 7;
                    player.playerDamage += 8;           
                    player.playerDefence += 10; 
                    break;
                case 3:
                    std::cout << "Ah so you are a, what? You're a what?" << endl;
                    player.playerRace = "Nothing";
                    player.playerHealth += 5;
                    player.playerDamage += 5;           
                    player.playerDefence += 15; 
                    break;
                default:
                    std::cout << "You need to choose again." << endl;
            }
            if (playerOption >= 1 && playerOption <= 3){
                break;
            }
        } 
    
// Select your class
    std::cout << "What class are you? \n" << "1. Warrior 2. Rogue 3.Berserker" << endl;
            while (true){
                int playerOption = 0;
                cin >> playerOption;
                
                switch (playerOption) {
                    case 1:
                        std::cout << "Your shield is pretty big, warrior." << endl;
                        player.playerClass = "Warrior";
                        player.playerHealth += 10;
                        player.playerDamage += 5;           
                        player.playerDefence += 10;   
                        player.playerWeapon = "Sword";         
                        break;
                    case 2:
                        std::cout << "Is that a dagger, rogue?" << endl;
                        player.playerClass = "Rogue";
                        player.playerHealth += 5;
                        player.playerDamage += 10;           
                        player.playerDefence += 10; 
                        player.playerWeapon = "Dagger";
                        break;
                    case 3:
                        std::cout << "Stop yelling, berserker.." << endl;
                        player.playerClass = "Berserker";
                        player.playerHealth += 5;
                        player.playerDamage += 15;           
                        player.playerDefence += 5;
                        player.playerWeapon = "Axe";
                        break;
                    default:
                        std::cout << "You need to choose again." << endl;
                }
                if (playerOption >= 1 && playerOption <= 3){
                    break;
                }
            }  

// Variable check
    std::cout << "Your name is: " << player.playerName << " and your race is " << player.playerRace << " and your class is " << player.playerClass << "." << endl;
    std::cout << "Your stats are: \n" << "HP: " << player.playerHealth << "\n" << "ATK: " << player.playerDamage << "\n" << "DEF: " << player.playerDefence << endl;
    std::cout << "Your weapon is " << player.playerWeapon << " and your experience is " << player.playerExperience << "." << endl;
    std::cout << "Good luck, hope you chose well!" << endl;

//rest hard code

    cout << "You find yourself being able to at the precipice of boredom. Press 1 for your adventure." << endl;
    player.currentPlayerHealth = player.playerHealth;
    int playerOption = 0;
    cin >> playerOption;
    if (playerOption == 1){
        std::cout << "You go for a wander" << endl;
    } else {
        std::cout << "You chase a squirrel into the woods" << endl;
    }
    
//combat function
    while(true) {
        if (player.currentPlayerHealth < 1) {
            break;
        }else {
            combatFunc();
            rpwFunc();            
            }
        }
    std::cout << "End of code";
}
    
