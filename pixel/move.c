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
//        int new_x = barrier[i].axis_x - 1; // 计算障碍物的新位置
//
//        if (!is_overlap(barrier, num, i, new_x))
//        {
//            barrier[i].axis_x = new_x; // 如果没有重叠，更新障碍物位置
//
//            // 移动障碍物的显示
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
//            // 如果新位置上已经有其他障碍物，返回重叠
//            return 1;
//        }
//    }
//    // 没有重叠
//    return 0;
//}
