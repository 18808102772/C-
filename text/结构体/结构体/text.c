#include<stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C���Գ������",55};
	printf("����:%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	strcpy(b1.name, "C++");
	b1.price = 35;
	printf("�޸ĺ������:%s\n", b1.name);
	printf("�޸ĺ�ļ۸�:%d\n", b1.price);
	return 0;
}
//���õ�ַ��ӡ
//printf("%s\n", pb->name);
//printf("%d\n", pb->price);