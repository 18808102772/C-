#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)//�Գ���
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				
//				break;
//			}
//			
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}
//�Ż���
#include<math.h>
int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//sqrt�ǿ�ƽ��
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}

	}
	return 0;
}