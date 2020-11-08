#ifndef __GEM_H__
#define __GEM_H_

typedef struct {
    int slot[14]; //宝石の列

    //宝石の属性
    typedef enum{
        EMPTY=0,
        FIRE=1,
        WATER=2,
        WIND=3,
        EARTH=4,
        LIFE=5,
    }gem_element;
}Gem;

void init_gem(int[]* gemslot);

//消した数が戻り値になる
int sort_gem(char* sortcmd);

#endif