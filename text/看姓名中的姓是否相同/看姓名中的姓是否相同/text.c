#include <stdio.h>

int main(void)
{
	char arr1[9], arr2[9];

	printf("请输入姓名1: ");
	scanf_s("%s", arr1);
	printf("请输入姓名2: ");
	scanf_s("%s", arr2);
	if (arr1[0] == arr2[0])
	{
		printf("\n“%s”与“%s”同姓。\n", arr1, arr2);
	}
	else
	{
		printf("\n“%s”与“%s”不同姓。\n", arr1, arr2);
	}

	return 0;
}