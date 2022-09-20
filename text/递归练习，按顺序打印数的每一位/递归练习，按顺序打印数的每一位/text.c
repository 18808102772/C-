#include <stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	printf("请输入一个数字:>");
	unsigned int num = 0;
	scanf_s("%d", &num);
	print(num);//按照输入数字顺序打印每位数
	return 0;
}