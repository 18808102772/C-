
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;

	scanf("%d", &n);
	switch (n)//switch����������Ҫ������
	{
	case1://case���������ͳ������ʽ
		printf("����һ\n");
		break;
	case2:
		printf("���ڶ�\n");
		break;
	case3:
		printf("������\n");
		break;
	case4:
		printf("������\n");
		break;
	case5:
		printf("������\n");
		break;
	case6:
		printf("������\n");
		break;
	case7:
		printf("������\n");
		break;
	default://��ÿ��Switch����з�һ��default�Ӿ��Ǻ�ϰ�����������ں����ټ�һ��break
		printf("�������");
	}

}
//�����
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case1:
//		m++;
//	case2:
//		n++;
//	case3:
//		switch (n)
//		{
//			case1;
//			n++;
//			case2;
//			m++;
//			n++;
//			break;
//		}
//	case4:
//		m++;
//		break;
//	default:
//		break;
//
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}