#include "game.h" 

void play_mode(int difficulty)
{
	switch(difficulty)
	{
		case 1:
			Sleep(20); break;
		case 2:
			Sleep(40); break;
		case 3:
			Sleep(60); break;
		default:
			break;
	}
}