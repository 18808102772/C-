
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		int t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		int t = b;
		b = c;
		c = t;
	}
	printf("%d%d%d\n", a, b, c);
	return 0;
}