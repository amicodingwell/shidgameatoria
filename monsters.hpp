#include <iostream>
#include <string>
using namespace std;

//Class that makes monsters
class Monster {
    public:
        string monsterName = "";
        int monsterHealth = 0;
        int monsterDamage = 0;
        int monsterDefence = 0;
};

Monster smallOgre;
smallOgre.monsterName = "Small Ogre";
smallOgre.monsterHealth = 10;
smallOgre.monsterDamage = 3;
smallOgre.monsterDefence = 3;
