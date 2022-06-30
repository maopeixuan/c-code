#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{   
	int a,b;
	//for (i = 1; i <= 100;i+=2)//while /do while/for 是循环语句
	//{//switch 判断的一定是整形表达式short/int/long long, switch case 是分支语句
	//	//switch(整形变量)
	//	//{ 
	//	// case “填一个常数”:
	//	//     
	//	//if (1 == i % 2)
	//		printf("odd %d\n", i);
	//}
	//scanf("%d",&i);
	//switch (i)
	//{
	//default:
	//	printf("xs");
	//	break;
	//case 1:
	//	printf("i=%d",i);
	//	break;
	//}
	a = 1;
	b = 2;
	switch (a)//（（switch case 语句)==分支语句）&&（（））
		//break打破的是上面离得最近的switch
	{//while /do while /for 语句是循环语句
	case 1:b++;
	case 2:a++;
	case 3:
		switch (a)
		{
		case 1:a++;
		case 2:a++; b++; break;
		}
	case 4:b++;
		break;
	default:break;
	}
	printf("a=%d  b=%d",a,b);
	return 0;
}