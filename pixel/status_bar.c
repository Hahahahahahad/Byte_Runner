#include "game.h"

void status_bar(int life, int score, int time, int condition,int equipment)
{
	move_to_xy(0,0);
    //显示生命
    const char LIFE[] = "##";
	printf("生命：");
	if (life == 1)
	{
		color(4);
		printf("##");
	}
	else if (life == 2)
	{
		color(6);
		printf("####");
	}
	else if (life == 3)
	{
		color(2);
		printf("######");
	}
	color(16);
    printf("\n");

    //显示分数
	printf("分数：%d", score);    
	printf("\n");

	//显示时间
	printf("时间：%d", time);
	printf("\n");

	//显示状态
	printf("盾牌：%d", condition);
	printf("\n");
	printf("装备：");

	if (equipment == 0)
	{
		printf("无");
	}
	else if(equipment == 1)
	{
		printf("喷火枪");
	}
	printf("\n");
	//equipment: 0没有喷火枪，1有喷火枪
}