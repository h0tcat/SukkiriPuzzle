#ifndef __MONSTER_H__

#define __MONSTER_H__
//属性列挙型
typedef enum{
    FIRE=0,
    WATER=1,
    WIND=2,
    EARTH=3,
    LIFE=4,
    EMPTY=5,
}Element;

//モンスター構造体
typedef struct
{
    int hp;
    int maxhp;
    Element element;
    int offence;
    int defence;
} Monster;

#endif