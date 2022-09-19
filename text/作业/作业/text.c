#include <stdio.h>

int main(void)

{
	int num, a1, b1, c1, d1, sum;

	printf("Input a number with 4-digit: ");
	scanf_s("%d", &num);
	a1 = num / 1000;
	b1 = num / 100 % 10;
	c1 = num / 10 % 10;
	d1 = num % 10;
	sum = a1 + b1 + c1 + d1;
	printf("\nsum=%d\n", sum);

	return 0;
}