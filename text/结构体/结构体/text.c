#include<stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C语言程序设计",55};
	printf("书名:%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	strcpy(b1.name, "C++");
	b1.price = 35;
	printf("修改后的书名:%s\n", b1.name);
	printf("修改后的价格:%d\n", b1.price);
	return 0;
}
//利用地址打印
//printf("%s\n", pb->name);
//printf("%d\n", pb->price);