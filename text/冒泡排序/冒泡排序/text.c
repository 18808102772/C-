#include <stdio.h>

bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i ++ )//����Ҫ������
	{
		int flag = 1;//�������������Ѿ�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//ÿһ��
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//����������ʵ����ȫ����
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
	bubble_sort(arr, sz);//ð������-->����
	for (n = 0; n < sz; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}