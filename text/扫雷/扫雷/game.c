#include "game.h"
void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
	
}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印行号和列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}
//'1' - '0' = 1
//'0' - '0' = 0
//数组里面放的是字符，需要显示的是数字
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] +
		mine[x][y - 1] +
		mine[x - 1][y - 1] - 8 * '0';

}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//共有9*9-10个雷
	while (win <= row * col - easy_count)
	{
		printf("请输入排查雷的坐标：>");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了");
				display(mine, row, col);
				break;
			}
			//没踩雷
			else
			{
				//计算x，y周围雷的个数
				int count = get_mine_count;
				show[x][y] = count + '0';
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入错误，请重新输入！\n");

		}
	}
	if (win == row * col - easy_count)
	{
		printf("恭喜你，扫雷成功");
		displayboard(mine, row, col);
	}
}