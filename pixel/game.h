#ifndef _GAME_H
#define _GAME_H
#define _CRT_SECURE_NO_WARNINGS
#include "resource.h"
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <mmsystem.h>
#pragma  comment (lib,"Winmm.lib") // π”√“Ù¿÷≤•∑≈ø‚


struct BARRIER
{
    int         type;
    int         axis_x;
};

struct ITEM
{
    int         type;
    int         axis_x;
};

void menu();
void status_bar(int life, int score, int time, int condition,int equipment);
void move_to_xy(int x, int y);
void cursor_hidden();
void background();
void statement();
void color(const unsigned short textColor);
void figure(int control_code);
void figure_crouch();
void figure_run();
void figure_jump();
void figure_flamethrower();
void play_mode(int difficulty);
void control(int* pcontrol_code, int* pmove_timer, int move_timer, int* pequipment);
void barrier1(int x);
void barrier2(int x);
void coin1(int x);
void coin2(int x);
void shield(int x);
void equipment(int x);
void gameover(int score, int time1);
void score_caculate(int item_amount_start, int item_amount_end, struct ITEM item[], int figure_status, int* pscore);
//int is_overlap(struct BARRIER barrier[], int num, int current_index, int new_x);
void barrier_move(struct BARRIER barrier[], int num,int barrier_amount_start);
void equipment_contorl(int* pcontrol_code, int* pmove_timer, int move_timer, int* pequipment);
void coin_move(struct ITEM item[], int num, int coin_amount_start);
void random_barrier(struct BARRIER barrier[], int* pnum);
void shield_caculate(int item_amount_start, int item_amount_end, struct ITEM item[], int figure_status, int* pcondition);
void equipemt_condition(int item_amount_start, int item_amount_end, struct ITEM item[], int figure_status, int* pequipment);
void crash(int barrier_amount_start, int barrier_amount_end, struct BARRIER barrier[], int figure_status, int* plife,int*pcondition, int condition);
void F_crash(int barrier_amount_start, int barrier_amount_end, struct BARRIER barrier[], int figure_status);
int difficulty_choice();
void write_score(int score);
int read_score();
void comparsion_and_write_score(int score);

#endif // _GAME_H