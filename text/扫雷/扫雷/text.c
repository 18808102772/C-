#include <stdio.h>

void menu()
{
	printf("*************************\n");
	printf("****      1.play     ****\n");
	printf("****      0.exit     ****\n");
	printf("*************************\n");
}
void game()
{
	printf("ɨ��\n");
}
void text()
{
	int input=0;
	
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������");				
			break;
		}
	} while (input);
}
int main(void)
{
	text();
	return 0;
}