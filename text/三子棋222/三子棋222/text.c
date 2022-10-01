
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
	//�����ŵ���Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	displayboard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		playmove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//��������
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
	}
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	printf("����������:>");
	scanf_s("%d", &input);
	do
	{
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);
}

int main(void)
{
	text();
	return 0;
}