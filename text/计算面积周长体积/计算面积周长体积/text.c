#include <stdio.h>

int main(void)
{
	float rr, C1, S1, V1, a1, hh;

	printf("Input: ");
	scanf_s("r=%f, h=%f", &rr, &hh);
	a1 = 3.14f;
	C1 = 2 * (float)(a1 * rr);
	S1 = (float)a1 * rr * rr;
	V1 = (float)a1 * rr * rr * hh;
	printf("\nC1 = %.2f\n S = %.2f\n V = %.2f\n", C1, S1, V1);

	return 0;
}