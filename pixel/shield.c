#include"game.h"

void shield_caculate(int item_amount_start, int item_amount_end, struct ITEM item[], int figure_status, int* pcondition)
{
	for (int i = item_amount_start; i <= item_amount_end; i++)
	{
		switch (item[i].type)
		{
		case 3:
		{
			if (figure_status != 0 || figure_status != 1 || figure_status != 2)
			{
				if (item[i].axis_x >= 25 && item[i].axis_x <= 27)
				{
					(*pcondition)++;
					item[i].type = -1;
					item[i].axis_x = -1;
				}
			}
			break;
		}
		}
	}
}