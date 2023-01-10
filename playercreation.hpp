#include <iostream>
using namespace std;



//class makes the object uninitialized
class Player {
    public:
        string playerName = "";
        string playerRace = "";
        string playerClass = "";
        string playerWeapon = "";
        int playerHealth = 0;
        int playerDamage = 0;
        int playerDefence = 0;
        int playerExperience = 0;
};  
//playercreation function
Player player{"","","","",0,0,0,0};
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
        }
// Information check
void playerInfo() {
            std::cout << "Your name is: " << player.playerName << " and your race is " << player.playerRace << " and your class is " << player.playerClass << "." << endl;
            std::cout << "Your stats are: \n" << "HP: " << player.playerHealth << "\n" << "ATK: " << player.playerDamage << "\n" << "DEF: " << player.playerDefence << endl;
            std::cout << "Good luck, hope you chose well!" << endl;
    };


