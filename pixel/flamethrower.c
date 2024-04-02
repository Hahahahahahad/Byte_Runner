#include"game.h"
void equipemt_condition(int item_amount_start, int item_amount_end, struct ITEM item[], int figure_status, int* pequipment)
{
	for (int i = item_amount_start; i <= item_amount_end; i++)
	{
		switch (item[i].type)
		{
		case 4:
		{
			if (figure_status == 2)
			{
				if (item[i].axis_x >= 25 && item[i].axis_x <= 27)
				{
					*pequipment = 1;
					item[i].type = -1;
					item[i].axis_x = -1;
				}
			}
			break;
		}
		}
	}
}