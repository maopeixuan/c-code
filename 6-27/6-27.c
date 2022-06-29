#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int a = 1;
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		printf("i=%d\n",i);
//		i++;
//
//	}
//	return 0;
//}
//void main()
//{
//	int a = 23,
//		b = 54,
//		c;
//
//	c = a > b ? a : b;
//	printf("c=%d\n",c);
//	//return 0;
//}
//int main()
//{
//	long long a=0,
//		b=0,
//		i = 0;
//	//int arr[50];
//	char arr[16] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9','A','B','C','D','E','F'};
//	char arr1[50];
//	printf("十进制数为 ");
//	scanf("%d", &a);
//	while (a >= 16)
//	{
//		b = a % 16;
//		a = a / 16;
//		arr1[i] = arr[b];
//		i++;
//	}
//	printf("十六进制数为：0x%d",a);
//	i = i - 1;
//	while (i >= 0)
//	{
//		printf("%c",arr1[i]);
//		i--;
//	}
//	return 0;
//}
int main()
{
	int a;
	int *p = &a;
	printf("%p\n",p);
	return 0;
}