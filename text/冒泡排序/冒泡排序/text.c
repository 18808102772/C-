#include <stdio.h>

bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i ++ )//计算要多少趟
	{
		int flag = 1;//假设这组数据已经有序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//每一趟
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟数据其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	

}
int main(void)
{
	int n = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//冒泡排序-->升序
	for (n = 0; n < sz; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}