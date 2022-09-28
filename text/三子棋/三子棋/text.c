
#include "game.c"
#include "game.h"

void menu()
{
	printf("************************\n");
	printf("***1.play  2.exit*******\n");
	printf("************************\n");
}

void game()
{
	//数组存放的信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	displayboard(board, ROW, COL);
}
void text()
{
	int input = 0;
	menu();
	printf("请输入数字:>");
	scanf_s("%d", &input);
	do
	{
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("输入错误");
			break;
		}
	}while (input);
}

int main(void)
{
	text();
	return 0;
}