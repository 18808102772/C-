#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	printf("%d\n", sizeof(arr1));//sizeof����������ռ�ռ��С
	printf("%d\n", strlen(arr1));//strlen���ַ������ȡ�����\0��֮ǰ���ַ�����

	return 0;
}