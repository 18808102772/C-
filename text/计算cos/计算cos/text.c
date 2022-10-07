#include <stdio.h>
#include <math.h>

int main(void)
{
	float x1, y1;

	printf("«Î ‰»Îª°∂» x: ");
	scanf_s("%f", &x1);
	y1 = (float)cos(x1);
	printf("\nCos(%003.2f) = %006.5f\n", x1, y1);

	return 0;
}