#include <stdio.h>
#include "game.h"

//ゲームのモードを用意する

//gamemode変数を定義する 最初はTITLEが入る
GAME_MODE gamemode = GAMETITLE;

int main(void)
{

    //ゲームループ
    //もしEXITを選択したらゲームを終了する

    while (gamemode != GAMEEXIT)
    {
        switch (gamemode)
        {
        case GAMETITLE:
            game_title(&gamemode);
            break;
        case GAMELOOP:
            game_loop(&gamemode);
            break;
        }
    }

    printf("また遊んでね!\n");
    return 0;
}