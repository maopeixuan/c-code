#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[6] = {'a','b','c','d','e',0};
	printf("sizeof =>%d\n",sizeof(a));
	printf("strlen => %d\n", strlen(a));
	printf("the last one of array[]= > %c",a[4]);
	return 0;
}