#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define aa 20
int main(void)
{
	int mm, nn, dd;
	int i, j;
	int arr[aa][aa];
	printf("请输入 m 和 n: ");
	scanf("%d %d", &mm, &nn);
	printf("请输入 %d 行, 每行 %d 列整数:\n", mm, nn);
	for (i = 0; i < mm; i++)//储存二维数组，i行j列
	{
		for (j = 0; j < nn; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("请输入要显示列的列号: ");
	scanf("%d", &dd);
	printf("\n该列的内容为: ");
	for (i = 0; i < mm; i++)
	{
		printf("%d ", arr[i][dd]);//打印某一行或列的数据
	}
	printf("\n");

	return 0;
}