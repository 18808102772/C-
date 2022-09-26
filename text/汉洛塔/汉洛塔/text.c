#include <stdio.h>

void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("%c-->%c\n", x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);//��˼�ǰ�x�ϵĽ���z�Ƶ�y����ȥ
		printf("%c-->%c\n", x, z);//ʵ���˵ݹ�
		hanoi(n - 1, y, x, z);//��˼�ǰ�y����Ľ���x�Ƶ�z����ȥ
	}

}
int main(void)
{
	int n;
	printf("�����뺺����������>");
	scanf_s("%d", &n);
	hanoi(n, 'x', 'y', 'z');
	return 0;
}