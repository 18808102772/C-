#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define aa 20
int main(void)
{
	int mm, nn, dd;
	int i, j;
	int arr[aa][aa];
	printf("������ m �� n: ");
	scanf("%d %d", &mm, &nn);
	printf("������ %d ��, ÿ�� %d ������:\n", mm, nn);
	for (i = 0; i < mm; i++)//�����ά���飬i��j��
	{
		for (j = 0; j < nn; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("������Ҫ��ʾ�е��к�: ");
	scanf("%d", &dd);
	printf("\n���е�����Ϊ: ");
	for (i = 0; i < mm; i++)
	{
		printf("%d ", arr[i][dd]);//��ӡĳһ�л��е�����
	}
	printf("\n");

	return 0;
}