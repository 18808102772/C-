#include <stdio.h>

int main(void)
{
	char arr1[9], arr2[9];

	printf("����������1: ");
	scanf_s("%s", arr1);
	printf("����������2: ");
	scanf_s("%s", arr2);
	if (arr1[0] == arr2[0])
	{
		printf("\n��%s���롰%s��ͬ�ա�\n", arr1, arr2);
	}
	else
	{
		printf("\n��%s���롰%s����ͬ�ա�\n", arr1, arr2);
	}

	return 0;
}