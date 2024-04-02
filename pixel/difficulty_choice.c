#include "game.h"

int difficulty_choice()
{
	int difficulty = 1;
	move_to_xy(0, 0);
	printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("\t\t\t\t\t\t请选择难度\n");
	printf("\t\t\t\t\t1-困难"); printf("    2-普通"); printf("    3-简单\t\t\n\n");
	printf("\t\t\t\t  Tips:请把输入法调制英文以获得完整游戏体验\n\n");
	printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	do
	{
		if (difficulty < 1 || difficulty > 3)
			printf("请输入1-3之间的整数：\n");
		scanf_s("%d", &difficulty);
	} while (difficulty < 1 || difficulty > 3);
	return difficulty;
}