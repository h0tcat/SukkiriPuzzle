#ifndef __MONSTER_H__

#define __MONSTER_H__
//属性列挙型
typedef enum{
    FIRE=0,
    WATER=1,
    WIND=2,
    EARTH=3,
    EMPTY=4,
}Element;

//モンスター構造体
typedef struct
{
    char* name;
    int hp;
    int maxhp;
    Element element;
    int offence;
    int defence;
} Monster;

void attack(Monster* enemy,Monster* party){};

#endif