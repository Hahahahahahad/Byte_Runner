#include"game.h"
#include "resource.h"

void score_caculate(int item_amount_start, int item_amount_end, struct ITEM item[], int figure_status, int*pscore )
{
	for (int i = item_amount_start; i <= item_amount_end; i++)
	{
		switch (item[i].type)
		{
		case 1:
		{
			if (figure_status == 2||figure_status == 3)
			{
				if (item[i].axis_x >= 25 && item[i].axis_x <= 27)
				{
					(*pscore)++;
					//PlaySound(MAKEINTRESOURCE(IDR_WAVE2), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
					
					//*pmove_timer = 2;
					item[i].type = -1;
					item[i].axis_x = -1;
				}
			}
			break;
		}
		case 2:
		{
			if (figure_status != 1|| figure_status != 0)
			{
				if (item[i].axis_x >= 25 && item[i].axis_x <= 27)
				{
					(*pscore)++;
					//PlaySound(MAKEINTRESOURCE(IDR_WAVE2), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
				
					//*pmove_timer = 2;
					item[i].type = -1;
					item[i].axis_x = -1;
				}
			}
		}
		}
	}
	/*if (move_timer >= 0)
	{
		(*pmove_timer)--;
	}
	if (move_timer <= 0)
		PlaySound(MAKEINTRESOURCE(IDR_WAVE1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);*/
}
