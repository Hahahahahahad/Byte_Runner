#include "game.h"

int difficulty_choice()
{
	int difficulty = 1;
	move_to_xy(0, 0);
	printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("\t\t\t\t\t\t��ѡ���Ѷ�\n");
	printf("\t\t\t\t\t1-����"); printf("    2-��ͨ"); printf("    3-��\t\t\n\n");
	printf("\t\t\t\t  Tips:������뷨����Ӣ���Ի��������Ϸ����\n\n");
	printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	do
	{
		if (difficulty < 1 || difficulty > 3)
			printf("������1-3֮���������\n");
		scanf_s("%d", &difficulty);
	} while (difficulty < 1 || difficulty > 3);
	return difficulty;
}