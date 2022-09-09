#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (1 == a)//书写习惯：把数字放在前面，如果错了就会报错，而如果a放在前面则不会报错

	{
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");//else遵循就近原则
	}
	return 0;
}