#include "game.h"

void menu()
{
	move_to_xy(46, 1);
	printf("Byte Runner");
	move_to_xy(80, 3);
	printf("��ʷ��߷֣�%d", read_score());
	move_to_xy(35, 6);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	move_to_xy(32, 7);
	printf("\t       <��Ϸ˵��>\n");
	move_to_xy(32, 8);
	printf("\t       ˫��w-��Ծ\n");
	move_to_xy(32, 9);
	printf("\t       ˫��s-����\n");
	move_to_xy(35, 10);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	move_to_xy(42, 12);
	printf(" ����Enter��ʼ��Ϸ");
	move_to_xy(15, 16);
	printf("/ | ");
	move_to_xy(14, 14);
	printf("/|  |>");
	move_to_xy(16, 15);
	printf("||");
	move_to_xy(16, 13);
	printf("()");
	move_to_xy(0, 17);
	for (int i = 0; i < 99; i++)
	{
		printf("=");
	}
	getchar();
	system("cls");
}