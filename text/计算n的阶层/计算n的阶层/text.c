#include<stdio.h>
//����1��+2��+3!+...+10!
//int main()
//
//{
//	int a = 1;
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{	
//		a = 1;
//		for (i = 1; i <= n; i++)
//		{
//			a = a * i;
//		}
//		sum = sum + a;
//		
//	}
//	printf("sum=%d\n", sum);
//	
//	return 0;
//}
//�Ż���Ĵ���
int main()
{
	int a = 1;
	int sum = 0;
	int n = 0;
	for (n = 1; n <= 10; n++)
	{
		a = a * n;
		sum = sum + a;
	}
	printf("sum=%d\n", sum);
	return 0;
}
//����n�Ľ׳�
//int main()
//{
//	int n=0;
//	int i=0;
//	int a=1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{   
//		a = a * i;
//	}
//	printf("a=%d\n", a);
//	return 0;
//}
