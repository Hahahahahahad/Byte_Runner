#include "game.h"

void move_to_xy(int x, int y)//�ƶ�����
{
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}