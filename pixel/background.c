#include "game.h"
#include <windows.h>

void background()                 //±³¾°°å
{
    move_to_xy(0, 9);
    for (int i = 0; i < 99; i++)
    {
        printf("=");
    }
    move_to_xy(0, 0);
	move_to_xy(0, 17);
    for (int i = 0; i < 99; i++)
    {
        printf("=");
    }
    move_to_xy(0, 0);
}