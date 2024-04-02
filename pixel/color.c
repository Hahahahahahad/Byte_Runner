#include"game.h"

void color(const unsigned short textColor)      //自定义函根据参数改变颜色 
{
    if (textColor >= 0 && textColor <= 15)     //参数在0-15的范围颜色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);  //用一个参数，改变字体颜色
    else   //不在0-15则为默认白色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

/*
    0 = 黑色       8 = 灰色
    1 = 蓝色       9 = 淡蓝色
    2 = 绿色       A = 淡绿色 10
    3 = 浅绿色     B = 淡浅绿色 11
    4 = 红色       C = 淡红色 12
    5 = 紫色       D = 淡紫色 13
    6 = 黄色       E = 淡黄色 14
    7 = 白色       F = 亮白色 15
*/