#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)//&&逻辑与    ||逻辑或
	{
		if (b == 2)
			printf("a=%d b=%d", a, b);
	}
	else
		printf("a!=,b!=");//else只会跟(离得最近的)&&(未匹配的)if匹配
	return ;
}