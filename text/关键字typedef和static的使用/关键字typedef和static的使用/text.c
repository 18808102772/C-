#include<stdio.h>
//typedef��ʹ��-���Ͷ���-�����ض���
//int main()
//{
//	typedef unsigned int U_int;//unsigned��ʾ�����޷��ŵģ����ǷǸ���
//	unsigned int num1 = -20;
//	U_int num2 = 20;
//	if (num1 = num2)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}
void text()
	{
	int a = 1;
	a++;
	printf("a=%d\n", a);//��ʱ���Ϊ 22222����ӡ����a��ֵ��������i��ֵ
	//����int a=1��Ϊstatic int a =1 �������23456
	// ��ʱ��a��һ����̬�ľֲ�����
	//static���ξֲ�������ʹ�ֲ��������������ڱ䳤
	//static����ȫ�ֱ������Ǹı�ȫ�ֱ������������þ�̬��ȫ�ֱ���ֻ���Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û����ʹ�á�
	//static���κ����ı��˺������������ԡ�
	}
int main()
{
	int i = 0;
	while (i < 5)
	{
		text();//�����whileѭ����Ҫʹѭ�����
		i++;
	}
	return 0;
}