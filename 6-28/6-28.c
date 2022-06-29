#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define max  20
#define ADD(x,y) (x+y)
int main()
{
	int a = 0; 
	int* p = &a;
	*p = 20;
	printf("%p  %d\n",p,a);
	printf("%d\n",ADD(max,a));
	return 0;
}