
#include "game.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < row; j++)
		{
			//1.��ӡһ�е�����
			printf(" %c ", board[i][j]);
			if (j < row - 1)
				printf("|");
		}
		printf("\n");
		if(j<row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		//2.��ӡ�ָ���
		if (i < row - 1)
		{
			printf("---|---|---");
		}
	}
}
