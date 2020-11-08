#include <stdio.h>
#include <stdlib.h>

#include "game.h"

void game_title(GAME_MODE* mode){
    printf("********************\n");
    printf("   Sukkiri Puzzle   \n");
    printf("********************\n");

    printf("0 ゲーム開始\n");
    printf("1 ゲーム終了\n");
    printf("行いたい操作を番号で入力してください");
    
    char* number_str;

    scanf(number_str);
    int number=strtol(number_str,&number_str,10);

    switch(number){
        case 0: //ゲーム開始
            *mode=GAMELOOP;
            break;
        case 1:
            *mode=GAMEEXIT;
            break;
    }
}

void game_loop(GAME_MODE* mode){
    Party monster_party;
    go_dungeon(&monster_party);
}

void go_dungeon(Party* party){
    
}