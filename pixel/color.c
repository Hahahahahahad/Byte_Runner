#include"game.h"

void color(const unsigned short textColor)      //�Զ��庯���ݲ����ı���ɫ 
{
    if (textColor >= 0 && textColor <= 15)     //������0-15�ķ�Χ��ɫ
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);  //��һ���������ı�������ɫ
    else   //����0-15��ΪĬ�ϰ�ɫ
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

/*
    0 = ��ɫ       8 = ��ɫ
    1 = ��ɫ       9 = ����ɫ
    2 = ��ɫ       A = ����ɫ 10
    3 = ǳ��ɫ     B = ��ǳ��ɫ 11
    4 = ��ɫ       C = ����ɫ 12
    5 = ��ɫ       D = ����ɫ 13
    6 = ��ɫ       E = ����ɫ 14
    7 = ��ɫ       F = ����ɫ 15
*/