#define _CRT_SECURE_NO_WARNINGS 1

//ѡ�����
#include<stdio.h>
int main()
{
	int coding = 0;
	printf("����ô����𣿣�ѡ��1/0��>:");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("���,����к�offer");
	}
	else
	{
		printf("����,�ؼ�������");
	}

	return 0;
}