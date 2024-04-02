#include "game.h"

void control(int *pcontrol_code, int *pmove_timer,int move_timer,int*pequipment)
{
		while (_kbhit())
		{
			char keybroad_input = _getch();
			fflush(stdin);

			if (keybroad_input == 'w')
			{
				*pcontrol_code = 2;
				*pmove_timer = 10;
			}
			else if (keybroad_input == 's')
			{
				*pcontrol_code = 1;
				*pmove_timer = 10;
			}
			else if (*pequipment == 1)
			{
				*pcontrol_code = 3;
				*pmove_timer = 20;
			}
		}

	if (move_timer >= 0)
	{
		(*pmove_timer)--;
	}
	if (move_timer <= 0)
	{
		*pcontrol_code = 0;
		*pequipment = 0;
	}
}