#include "game.h"

void cursor_hidden()//���ع��
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut, &cci);
	cci.bVisible = 0;//��1Ϊ��ʾ����0Ϊ����
	SetConsoleCursorInfo(hOut, &cci);
}