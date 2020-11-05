#ifndef __GAME_H__

#define __GAME_H__
typedef enum
{
    GAMETITLE,
    GAMELOOP,
    GAMEEXIT,
} GAME_MODE;

void game_title();
void game_loop();

#endif