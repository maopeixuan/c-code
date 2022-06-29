#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i=0;
//	while (i < 223)
//	{
//		i++;
//		printf("打代码,第%d行\n",i);
//	}
//	if (i >= 20000)
//		printf("你就成功了");
//	else
//		printf("快回去敲代码");
//	return 0;
//}
int add(int x, int y)
{
	//int z = x + y;
	return x + y;
}
//int main()
//{
//	int a;
//	int b;
//	int sum;
//	scanf("%d%d", &a, &b);
//	sum = add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}
int main()
{
	int arr[20],
		i=0;
	while (i < 20)
	{
		arr[i] = i+1;
		
		printf("a[%d]=%d\n", i, arr[i]);
		i++;

	}
	printf("%d\n",!!!i);
	return 0;
}