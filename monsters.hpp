#include <iostream>
#include <string>
#include <list>
using namespace std;

//Class that makes monsters
class Monster {
    public:
        std::string monsterName = "";
        int monsterHealth = 0;
        int monsterDamage = 0;
        int monsterDefence = 0;
        string monsterMove1 = "";
        string monsterMove2 = "";
        int monsterListNum = 0;
};


//monsters
Monster smallOgre{"Small Ogre ", 10, 3, 3, "measly club swing", "headbutt", 1};
Monster largeOgre{"Large Ogre ", 13, 5, 4, "heavy club swing", "headcrusher", 2};
Monster smallSpider{"Small Spider ", 5, 1, 1, "pinprick bite", "venom drizzle", 3};
Monster largeSpider{"Large Spider ", 7, 2, 2, "owie bite", "venom plunge", 4};

//monster list
void MList() {
std::list<int> monsterList;
monsterList.push_back(smallOgre.monsterListNum);
monsterList.push_back(largeOgre.monsterListNum);
monsterList.push_back(smallSpider.monsterListNum);
monsterList.push_back(largeSpider.monsterListNum);

};