#include"game.h"

void figure(int control_code)
{
	switch (control_code)
	{
	case 0:
		figure_run();
		break;
	case 1:
		figure_crouch();
		break;
	case 2:
		figure_jump();
		break;
	case 3:
		figure_flamethrower();
		break;
	default:
		break;
	}
}
void figure_crouch()//crouch			control_code:1
{
	move_to_xy(25, 16);
	printf("__// ");
	move_to_xy(25, 15);
	printf("<|  |>))");
	move_to_xy(27, 14);
	printf("()");
	move_to_xy(0, 0);
}

void figure_run()//run        control_code:0
{
	move_to_xy(25, 16);
	printf("/ | ");
	move_to_xy(24, 14);
	printf("/|  |>");
	move_to_xy(26, 15);
	printf("||");
	move_to_xy(26, 13);
	printf("()");
	move_to_xy(0, 0);
}

void figure_jump()//jump        control_code:2
{
	move_to_xy(25, 15);
	printf("/\\");
	move_to_xy(25, 14);
	printf("||");
	move_to_xy(22, 13);
	printf(" /|  |\\ ");
	move_to_xy(25, 12);
	printf("()");
	move_to_xy(0, 0);
}

void figure_flamethrower()     //controlcode:3
{
	move_to_xy(25,11);
	color(10);
	printf("__");
	move_to_xy(25, 12);
	color(7);
	printf("()");
	move_to_xy(23, 13);
	color(7);
	printf("=|  |> ");
	move_to_xy(25, 14);
	color(7);
	printf("||");
	move_to_xy(23, 15);
	color(7);
	printf("// |");
	move_to_xy(24, 12);
	color(10);
	printf("<");
	move_to_xy(27, 12);
	color(10);
	printf("]");
	move_to_xy(21, 13);
	color(8);
	printf("|<");
	move_to_xy(30, 13);
	color(8);
	printf("-= + |>б╛==");
	move_to_xy(24, 14);
	color(10);
	printf("{");
	move_to_xy(27, 14);
	color(10);
	printf("}");
	move_to_xy(23, 15);
	color(10);
	printf("//");
	move_to_xy(27,15);
	color(10);
	printf("}");
	move_to_xy(39,11);
	color(12);
	printf("%#@#@$");
	move_to_xy(38, 12);
	color(4);
	printf("/ %%%%*&%^^$%&^##$%%");
	move_to_xy(40, 13);
	color(4);
	printf("| % &*ги & #@#");
	move_to_xy(38,14);
	color(4);
	printf("\\%^%#%^#$%#$%^#$%%&$*@");
	move_to_xy(39, 15);
	color(12);
	printf("$#%^#");
	color(16);
}