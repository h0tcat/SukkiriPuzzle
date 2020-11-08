#include <stdlib.h>
#include <time.h>

#include "enemies.h"

void attack(Monster* enemy,Monster* party){

    // result変数にパーティーに与えるダメージを計算して代入する
    srand((unsigned)time(0UL));
    int attack=(rand() % 10)+1;
    int result = (enemy->offence-party->defence)*attack;

    if(result<0) 
        result=1;
    //ダメージを適用
    party->hp-=result;
}