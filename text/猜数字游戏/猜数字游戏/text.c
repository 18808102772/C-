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
	int ret = 0; ;//拿时间戳来设置随机数
	ret = rand() % 100 + 1;//生成0-100之间的随机数
	while (1)
	{
		printf("请输入数字>:\n");
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");

		}
		else if (guess > ret)
		{
			printf("猜大了\n");

		}

		else 
		 {
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//NULL是空指针
	do
	{
		
		manu();
		printf("请选择>:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			
			printf("开始游戏");
			game();
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);
	return 0;
}