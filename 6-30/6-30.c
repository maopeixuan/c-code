#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{   
	int a,b;
	//for (i = 1; i <= 100;i+=2)//while /do while/for ��ѭ�����
	//{//switch �жϵ�һ�������α��ʽshort/int/long long, switch case �Ƿ�֧���
	//	//switch(���α���)
	//	//{ 
	//	// case ����һ��������:
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
	switch (a)//����switch case ���)==��֧��䣩&&��������
		//break���Ƶ���������������switch
	{//while /do while /for �����ѭ�����
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