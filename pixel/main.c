#define _CRT_SECURE_NO_WARNINGS
#include "game.h"



int main()  
{

    system("mode con: cols=120 lines=30");
    int time1=0;
	int over = 0;
    int barrier_num = 0;                                                        //num的值同时为barrier_amount_end(显示的最后一个障碍物序号)
    int* pbarrier_num;
    pbarrier_num = &barrier_num;                                                    //障碍物序号
    int item_num = 0;
    int* pitem_num;
    pitem_num = &item_num;
	int control_code = 0; 
    int* pcontrol_code;
	pcontrol_code = &control_code;                        //控制代码
    struct BARRIER barrier[20000];                       //障碍物
    struct ITEM item[20000];                                 //物品
    int barrier_x = 93;                                              //障碍物起始位置
    int life = 3, score = 0, tim = 0, condition = 0, equipment = 0;   //主角状态
    int* plife;
    int* pcondition;
    int* pscore;
    int* pequipment;
    pequipment = &equipment;
    pcondition = &condition;
    plife = &life;
    pscore = &score;
    int timer = 0;                                                       //刷新障碍物间隔
    int barrier_amount_start = 0;                            //有效障碍物起始num
    int item_amount_start = 0;
    int difficulty = 0;
    int move_timer = 0;                                            //移动间隔
    int* pmove_timer;
    pmove_timer = &move_timer;
    int move_timer1 = 0;                                           
    int* pmove_timer1;
    pmove_timer1 = &move_timer1;

    //初始化barrier
    for (int i = 0; i < 20000; ++i) {
        barrier[i].type = 0;
        barrier[i].axis_x = 0;
    }

    //初始化item
    for (int i = 0; i < 20000; ++i) {
        item[i].type = 0;
        item[i].axis_x = 0;
    }

    //主菜单
    menu();
    //难度选择
    difficulty = difficulty_choice();

    //时间
    time_t start_time, current_time;
    start_time = time(NULL);

    ////playsounds
    PlaySound(MAKEINTRESOURCE(IDR_WAVE1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);


    while(1)
    {
        srand((unsigned int)time(NULL));      //随机数种子
        status_bar(life,score,time1,condition,equipment);   //计分板&状态栏
        statement();                                          //说明
		background();                                      //背景
        //删去无效障碍物
        for (int i = 0; i <= barrier_num; i++)
        {
            if (barrier[i].axis_x <= 1)
            {
                barrier[i].axis_x = -1;
                barrier[i].type = -1;
            }
        }

        //删去无效物品
        for (int i = 0; i <= item_num; i++)
        {
            if (item[i].axis_x <= 1)
            {
                item[i].axis_x = -1;
                item[i].type = -1;
            }
        }

        //生成障碍物参数
        if (timer == 0)
        {
            random_barrier(barrier, pbarrier_num);
            timer = rand() % 15 + 25;
        }
        timer--;

        //生成硬币参数
        if (timer == 0)
        {
            random_coin(item, pitem_num);
            timer = rand() % 3 + 5;
        }
        timer--;

        //控制人物
        control(pcontrol_code,pmove_timer,move_timer,pequipment);
       
        figure(control_code);

        //碰撞检测
        crash(barrier_amount_start, barrier_num, barrier, control_code, plife,pcondition,condition);
        F_crash( barrier_amount_start,  barrier_num, barrier, control_code);
        score_caculate(item_amount_start, item_num, item, control_code, pscore);
        equipemt_condition( item_amount_start,  item_num, item, control_code, pequipment); 
        //equipment_contorl(pcontrol_code, pmove_timer, move_timer, pequipment);
        shield_caculate( item_amount_start, item_num, item, control_code,pcondition);
        //移动&输出障碍物
        barrier_move(barrier, barrier_num,barrier_amount_start);
        coin_move(item, item_num, item_amount_start);
       
        cursor_hidden();//隐藏光标
        play_mode(difficulty);
        system("cls");
        current_time = time(NULL);
        time1= difftime(current_time, start_time);
        //死亡判定
        if (life == 0)
        {
            gameover(score, time1);
            PlaySound(MAKEINTRESOURCE(IDR_WAVE3), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC | SND_LOOP);
            break;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        printf("\n");
    }
    getchar();
    getchar();
    return 0;
}
         //    __            %#@#@$
         //   <()]          / %%%%*&%^^$%&^##$%%
         //|<=|  |> -= + |>【==| % &*（ & #@#
         //   {||}          \\%^%#%^#$%#$%^#$%
         //  // |}            $#%^#$