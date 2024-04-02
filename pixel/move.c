#include"game.h"

void barrier_move(struct BARRIER barrier[], int num,int barrier_amount_start)
{
    for (int i = barrier_amount_start; i < num; i++)
    {
        barrier[i].axis_x--;
        if (barrier[i].type == 1)
            barrier1(barrier[i].axis_x);
        if (barrier[i].type == 2)
            barrier2(barrier[i].axis_x);
    }
}

void coin_move(struct ITEM item[],int num,int coin_amount_start)
{
    for (int i = coin_amount_start; i < num; i++)
    {
        item[i].axis_x--;
        if (item[i].type == 1)
            coin1(item[i].axis_x);
        if (item[i].type == 2)
            coin2(item[i].axis_x);
        if (item[i].type == 3)
            shield(item[i].axis_x);
        if (item[i].type == 4)
            equipment(item[i].axis_x);
    }
}
//void move1(struct BARRIER barrier[], int num, int barrier_amount_start)
//{
//    for (int i = barrier_amount_start; i < num; i++)
//    {
//        int new_x = barrier[i].axis_x - 1; // �����ϰ������λ��
//
//        if (!is_overlap(barrier, num, i, new_x))
//        {
//            barrier[i].axis_x = new_x; // ���û���ص��������ϰ���λ��
//
//            // �ƶ��ϰ������ʾ
//            if (barrier[i].type == 1)
//                barrier1(barrier[i].axis_x);
//            else if (barrier[i].type == 2)
//                barrier2(barrier[i].axis_x);
//            else if (barrier[i].type == 3)
//                coin1(barrier[i].axis_x);
//            else if (barrier[i].type == 4)
//                coin2(barrier[i].axis_x);
//        }
//    }
//}
//
//int is_overlap(struct BARRIER barrier[], int num, int current_index, int new_x)
//{
//    for (int j = 0; j < num; j++)
//    {
//        if (j == current_index && barrier[j].axis_x == new_x)
//        {
//            // �����λ�����Ѿ��������ϰ�������ص�
//            return 1;
//        }
//    }
//    // û���ص�
//    return 0;
//}
