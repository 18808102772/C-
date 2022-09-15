#include<stdio.h>
int main()
{
	int i = 0;
	int a1[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = a1[0];
	for (i = 1; i < 10; i++)
	{
		int sz = sizeof(a1) / sizeof(a1[0]);
		if (a1[i] > max)
		{
			max = a1[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}