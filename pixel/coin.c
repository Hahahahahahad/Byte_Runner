#include "game.h"

void random_coin(struct ITEM item[], int* pcoin_num)
{
	int num = *pcoin_num;
	int i = rand() % 20 + 1;
	if (i <10 )
		item[num].type = 1;
	if(i >= 10 && i <=15)
		item[num].type = 2;
	if (i == 20)
		item[num].type = 3;
	if(i==19)
		item[num].type = 4;
	item[num].axis_x = 99;
	(*pcoin_num)++;
}

void coin1(int x)
{
	move_to_xy(x, 12);
	color(6);
	printf("@");
	color(16);
}

void coin2(int x)
{
	move_to_xy(x, 15);
	color(6);
	printf("@");
	color(16);
}

void shield(int x)
{
	move_to_xy(x, 14);
	color(8);
	printf("[-]");
	move_to_xy(x, 15);
	printf("\\_/");
	color(16);
}

void equipment(int x)
{
	move_to_xy(x, 12);
	color(8);
	printf("====");
	color(12);
	move_to_xy(x, 13);
	printf("|__|");
	color(16);
}