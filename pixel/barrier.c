#include "game.h"

void random_barrier(struct BARRIER barrier[], int* pnum)
{
	int num = *pnum;
	barrier[num].type = rand() % 2 + 1;
	barrier[num].axis_x = 99;
	(*pnum)++;
}

void barrier1(int x)
{
	move_to_xy(x, 10);
	printf("******");
	move_to_xy(x, 11);
	printf("******");
	move_to_xy(x, 12);
	printf("\\    /");
	move_to_xy(x+1, 13);
	printf("\\__/");
	move_to_xy(0, 0);
}

void barrier2(int x)
{
	move_to_xy(x, 16);
	printf("/\\/\\/\\");
	move_to_xy(0, 0);
}