#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;//int*是p的类型
	printf("%p\n", p);
	printf(" % d\n", *p);//*符号是解引用符
	return 0;
}
//有一种变量是用来存放地址的，这个变量就是指针变量
//指针大小在32位平台上是四个字节，在64位上是八个字节