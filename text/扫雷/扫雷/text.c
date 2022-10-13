#include <stdio.h>
#include "game.h"
void menu()
{
	printf("*************************\n");
	printf("****      1.play     ****\n");
	printf("****      0.exit     ****\n");
	printf("*************************\n");
}
void game()
{
	//布置雷
	char mine[ROWS][COLS] = {0};
	//排查雷
	char show[ROWS][COLS] = { 0 };
	//初始化
	initboard(mine, ROWS, COLS);
}
void text()
{
	int input=0;
	
	do
	{
		menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入");				
			break;
		}
	} while (input);
}
int main(void)
{
	text();
	return 0;
}