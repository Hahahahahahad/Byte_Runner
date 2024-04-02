#include "game.h"

void F_crash(int barrier_amount_start, int barrier_amount_end, struct BARRIER barrier[], int figure_status)
{
	for (int i = barrier_amount_start; i <= barrier_amount_end; i++)
	{
		switch (barrier[i].type)
		{
		case 1:
		{
			if (barrier[i].axis_x <= 58)
			{
				if (figure_status == 3)
				{
					barrier[i].type = -1;
					barrier[i].axis_x = -1;
				}
			}
			break;
		}
		case 2:
		{
			if (barrier[i].axis_x <= 58)
			{
				if (figure_status == 3)
				{
					barrier[i].type = -1;
					barrier[i].axis_x = -1;
				}
			}
		}
		}
	}
}
