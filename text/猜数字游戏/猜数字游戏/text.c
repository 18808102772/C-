#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void manu()
{
	printf("**********************\n");
	printf("**1.play      2.exit**\n");
	printf("**********************\n");
}
void game()
{
	int i = 0;
	int guess = 0;
	int ret = 0; ;//��ʱ��������������
	ret = rand() % 100 + 1;//����0-100֮��������
	while (1)
	{
		printf("����������>:\n");
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");

		}
		else if (guess > ret)
		{
			printf("�´���\n");

		}

		else 
		 {
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//NULL�ǿ�ָ��
	do
	{
		
		manu();
		printf("��ѡ��>:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			
			printf("��ʼ��Ϸ");
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
	return 0;
}