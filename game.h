#ifndef __GAME_H__

#include "party.h"
#define __GAME_H__
typedef enum
{
    GAMETITLE,
    GAMELOOP,
    GAMEEXIT,
} GAME_MODE;

void game_title(GAME_MODE* mode);
void game_loop(GAME_MODE* mode);

void go_gungeon(Party* party);

#endif