#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意：您的电脑将在一分钟内关机\n如果输入我是猪则取消关机\n请输入:>");
	scanf("%s", input);
	if (strcmp(input, "我是猪")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}