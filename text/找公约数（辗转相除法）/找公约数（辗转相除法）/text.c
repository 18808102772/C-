
#include<stdio.h>
int main()
{
	int i =0;
	int m=24;
	int n=18;
	scanf_s("%d%d", &m, &n);
	while (m % n )
	{
		i = m % n;
		m = n;
		n = i;
		
	}
	printf("%d\n", n);
	return 0;
}