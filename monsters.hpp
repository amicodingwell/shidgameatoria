#include <iostream>
#include <string>
using namespace std;

//Class that makes monsters
class Monster {
    public:
        std::string monsterName = "";
        int monsterHealth = 0;
        int monsterDamage = 0;
        int monsterDefence = 0;
};


//monster list
Monster smallOgre{"Small Ogre ", 10, 3, 3};
Monster largeOgre{"Large Ogre ", 13, 5, 4};
Monster smallSpider{"Small Spider ", 5, 1, 1};
Monster largeSpider{"Large Spider ", 7, 2, 2};