#include <iostream>
#include <string>
#include <list>
using namespace std;

//Class that makes monsters
class Monster {
    public:
        std::string monsterName = "";
        float monsterHealth = 0;
        float monsterDamage = 0;
        float monsterDefence = 0;
        string monsterMove1 = "";
        string monsterMove2 = "";
        int monsterListNum = 0;
};


//monsters
Monster smallOgre{"Small Ogre", 50, 6, 2, "measly club swing", "headbutt", 1};
Monster largeOgre{"Large Ogre", 70, 10, 2.3, "heavy club swing", "headcrusher", 2};
Monster smallSpider{"Small Spider", 30, 4, 1.4, "pinprick bite", "venom drizzle", 3};
Monster largeSpider{"Large Spider", 40, 5, 1.6, "owie bite", "venom plunge", 4};

//monster list
void MList() {
std::list<int> monsterList;
monsterList.push_back(smallOgre.monsterListNum);
monsterList.push_back(largeOgre.monsterListNum);
monsterList.push_back(smallSpider.monsterListNum);
monsterList.push_back(largeSpider.monsterListNum);

};