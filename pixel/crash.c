#include "game.h"

void crash(int barrier_amount_start, int barrier_amount_end, struct BARRIER barrier[], int figure_status, int* plife,int*pcondition,int condition)
{
	for (int i = barrier_amount_start; i <= barrier_amount_end; i++)
	{
		switch (barrier[i].type)
		{
		case 1:
		{
			if (barrier[i].axis_x >= 27 && barrier[i].axis_x <= 28 || barrier[i].axis_x >= 26 && barrier[i].axis_x <= 27 || barrier[i].axis_x >= 25 && barrier[i].axis_x <= 26 || barrier[i].axis_x >= 24 && barrier[i].axis_x <= 25 || barrier[i].axis_x >= 23 && barrier[i].axis_x <= 24)
			{
				
				if (figure_status != 1)
				{
					if(condition>0)
					{
						(*pcondition)--;
					}
					else 
					{
						(*plife)--;
					}
					barrier[i].type = -1;
					barrier[i].axis_x = -1;
				}
			}
			break;
		}
		case 2:
		{
			if (barrier[i].axis_x >= 25 && barrier[i].axis_x <= 27 || barrier[i].axis_x >= 24 && barrier[i].axis_x <= 26 || barrier[i].axis_x >= 23 && barrier[i].axis_x <= 25 || barrier[i].axis_x >= 22 && barrier[i].axis_x <= 24 || barrier[i].axis_x >= 21 && barrier[i].axis_x <= 23)
			{
				if (figure_status != 2)
				{

					if (condition >0)
					{
						(*pcondition)--;
					}
					else
					{
						(*plife)--;
					}
					barrier[i].type = -1;
					barrier[i].axis_x = -1;
				}
			}
		}
		}
	}
}