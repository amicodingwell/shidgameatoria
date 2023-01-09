#include <iostream>
#include "playeroption.hpp"
using namespace std;

//class makes the object uninitialized
class Player {
    public:
        string playerRace = "";
        string playerName = "";
        string playerClass = "";
        int playerHealth = 0;
        int playerDamage = 0;
        int playerDefence = 0;
        int playerExperience = 0;    
//playercreation function
        void playerCreation() {
// Select your player name
            std::string playerName ="";
            std::cout << "Hello, welcome to Shidgameatoria." << endl;
            std::cout << "Please tell us your name." << endl;
            std::getline(std::cin, playerName);
            std::cout << "Oh, your name is " << playerName << "..." << endl;
// Select your race
            std::cout << "What race are you? \n" << "1.Dog 2.Cat 3.Nothing" << endl;
            
            while (true){
                int playerOptionChoice = playerOption();
                
                switch (playerOptionChoice) {
                    case 1:
                        std::cout << "Ah so you are a Dog lmao." << endl;
                        playerRace = "Dog";
                        playerHealth += 10;
                        playerDamage += 10;           
                        playerDefence += 5;            
                        break;
                    case 2:
                        std::cout << "Ah so you are a Cat... Gross." << endl;
                        playerRace = "Cat";
                        playerHealth += 7;
                        playerDamage += 8;           
                        playerDefence += 10; 
                        break;
                    case 3:
                        std::cout << "Ah so you are a, what? You're a what?" << endl;
                        playerRace = "Nothing";
                        playerHealth += 5;
                        playerDamage += 5;           
                        playerDefence += 15; 
                        break;
                    default:
                        std::cout << "You need to choose again." << endl;
                }
                if (playerOptionChoice >= 1 && playerOptionChoice <= 3){
                    break;
                }
            } 
// Select your class
            std::cout << "What class are you? \n" << "1. Warrior 2. Rogue 3.Berserker" << endl;
            while (true){
                int playerOptionChoice = playerOption();
                
                switch (playerOptionChoice) {
                    case 1:
                        std::cout << "Your shield is pretty big, warrior." << endl;
                        playerClass = "Warrior";
                        playerHealth += 10;
                        playerDamage += 5;           
                        playerDefence += 10;            
                        break;
                    case 2:
                        std::cout << "Is that a dagger, rogue?" << endl;
                        playerClass = "Rogue";
                        playerHealth += 5;
                        playerDamage += 10;           
                        playerDefence += 10; 
                        break;
                    case 3:
                        std::cout << "Stop yelling, berserker.." << endl;
                        playerClass = "Berserker";
                        playerHealth += 5;
                        playerDamage += 15;           
                        playerDefence += 5; 
                        break;
                    default:
                        std::cout << "You need to choose again." << endl;
                }
                if (playerOptionChoice >= 1 && playerOptionChoice <= 3){
                    break;
                }
            }  
        }
// Information check
void playerInfo() {
            std::cout << "Your name is: " << playerName << " and your race is " << playerRace << " and your class is " << playerClass << "." << endl;
            std::cout << "Your stats are: \n" << "HP: " << playerHealth << "\n" << "ATK: " << playerDamage << "\n" << "DEF: " << playerDefence << endl;
            std::cout << "Good luck, hope you chose well!" << endl;
    };      
};
