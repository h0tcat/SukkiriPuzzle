#ifndef __ENEMY_H__
#define __ENEMY_H__

#include "monster.h"

typedef struct{
    Monster slime  {"スライム",150,150,WATER,10,5};
    Monster goblin {"ゴブリン",200,200,EARTH,20,15};
    Monster big_bat{"オオコウモリ",300,300,WIND,30,25};
    Monster wolf   {"ウェアウルフ",400,400,WIND,40,30};
    Monster dragon {"ドラゴン",800,800,FIRE,50,40};

}Enemies;

#endif