
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;

	scanf("%d", &n);
	switch (n)//switch后面括号中要是整型
	{
	case1://case后面是整型常量表达式
		printf("星期一\n");
		break;
	case2:
		printf("星期二\n");
		break;
	case3:
		printf("星期三\n");
		break;
	case4:
		printf("星期四\n");
		break;
	case5:
		printf("星期五\n");
		break;
	case6:
		printf("星期六\n");
		break;
	case7:
		printf("星期七\n");
		break;
	default://在每个Switch语句中放一个default子句是好习惯甚至可以在后面再加一个break
		printf("输入错误");
	}

}
//代码二
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case1:
//		m++;
//	case2:
//		n++;
//	case3:
//		switch (n)
//		{
//			case1;
//			n++;
//			case2;
//			m++;
//			n++;
//			break;
//		}
//	case4:
//		m++;
//		break;
//	default:
//		break;
//
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}