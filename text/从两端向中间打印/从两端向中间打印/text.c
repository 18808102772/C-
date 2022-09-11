#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char a1[] = "welcome to bit!!!!!!!";
	char a2[] = "                     ";
	int left = 0;
	int right = strlen(a1)-1;
	while (left <= right)
	{
		a2[left] = a1[left];
		a2[right] = a1[right];
		printf("%s\n", a2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	return 0;
}