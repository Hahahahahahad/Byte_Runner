#include "game.h"

void status_bar(int life, int score, int time, int condition,int equipment)
{
	move_to_xy(0,0);
    //��ʾ����
    const char LIFE[] = "##";
	printf("������");
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

    //��ʾ����
	printf("������%d", score);    
	printf("\n");

	//��ʾʱ��
	printf("ʱ�䣺%d", time);
	printf("\n");

	//��ʾ״̬
	printf("���ƣ�%d", condition);
	printf("\n");
	printf("װ����");

	if (equipment == 0)
	{
		printf("��");
	}
	else if(equipment == 1)
	{
		printf("���ǹ");
	}
	printf("\n");
	//equipment: 0û�����ǹ��1�����ǹ
}