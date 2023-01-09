#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomOption(){
    srand(time (0));

    int randomOutty = rand() % 4 + 1;
    return randomOutty;
}