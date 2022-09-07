#include<stdio.h>
//typedef的使用-类型定义-类型重定义
//int main()
//{
//	typedef unsigned int U_int;//unsigned表示的是无符号的，即是非负数
//	unsigned int num1 = -20;
//	U_int num2 = 20;
//	if (num1 = num2)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}
void text()
	{
	int a = 1;
	a++;
	printf("a=%d\n", a);//此时结果为 22222，打印的是a的值，并不是i的值
	//若把int a=1改为static int a =1 结果就是23456
	// 此时的a是一个静态的局部变量
	//static修饰局部变量，使局部变量的生命周期变长
	//static修饰全局变量，是改变全局变量的作用域，让静态的全局变量只能自己所在的源文件内部使用，出了源文件就没法再使用。
	//static修饰函数改变了函数的链接属性。
	}
int main()
{
	int i = 0;
	while (i < 5)
	{
		text();//这里的while循环主要使循环五次
		i++;
	}
	return 0;
}