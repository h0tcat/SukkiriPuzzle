#ifndef __PARTY_H__
#define __PARTY_H__

#include "monster.h"

typedef struct{
    Monster suzaku{150,150,FIRE,25,10};
    Monster seiryu{150,150,WIND,15,10};
    Monster byakko{150,150,EARTH,20,5};
    Monster genbu {150,150,WATER,20,15};

    char* player_name;
    
}Party;


#endif