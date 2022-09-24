#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	printf("%d\n", sizeof(arr1));//sizeof计算数组所占空间大小
	printf("%d\n", strlen(arr1));//strlen求字符串长度——‘\0’之前的字符个数

	return 0;
}