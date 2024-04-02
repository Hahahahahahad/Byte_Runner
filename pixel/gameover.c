#include "game.h"

void gameover(int score, int time1)
{
    comparsion_and_write_score(score);
    move_to_xy(0, 0);
    for (int i = 0; i < 99; i++)
    {
        printf("=");
    }
    move_to_xy(35, 5);
    printf("Game over");
    move_to_xy(35, 7);
    printf("Score:%d", score);
    move_to_xy(35, 8);
    printf("Time:%ds", time1);
    move_to_xy(35, 9);
    printf("Best Score:%d", read_score());
    move_to_xy(35, 10);
    printf("Press any key to continue...");
    move_to_xy(0, 17);
    for (int i = 0; i < 99; i++)
    {
        printf("=");
    }
    move_to_xy(0, 0);
    Sleep(1000);
}