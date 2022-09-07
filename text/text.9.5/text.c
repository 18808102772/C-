#define _CRT_SECURE_NO_WARNINGS 1

//选择语句
#include<stdio.h>
int main()
{
	int coding = 0;
	printf("你会敲代码吗？（选择1/0）>:");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("坚持,你就有好offer");
	}
	else
	{
		printf("放弃,回家卖红薯");
	}

	return 0;
}