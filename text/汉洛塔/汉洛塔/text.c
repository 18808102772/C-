#include <stdio.h>

void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("%c-->%c\n", x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);//意思是把x上的借助z移到y上面去
		printf("%c-->%c\n", x, z);//实现了递归
		hanoi(n - 1, y, x, z);//意思是把y上面的借助x移到z上面去
	}

}
int main(void)
{
	int n;
	printf("请输入汉洛塔层数：>");
	scanf_s("%d", &n);
	hanoi(n, 'x', 'y', 'z');
	return 0;
}