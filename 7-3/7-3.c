#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int a;
//	char password[20]={0};
//	printf("���������룺");
//	scanf("%s",password);
//	while ((a = getchar()) != '\n')
//		;
//	printf("������Y/N�Ա����Ƿ�ȷ�ϣ�");
//	if (a = getchar() == 'Y')
//		printf("���ȷ��");
//	else
//		printf("����ȷ��");
//	return 0;
//}
int main()
{
	int i;
	int a;
	while ((a = getchar()) != EOF)
	{
		if (a < '0' || a > '9')//loop is a process that does something similar over and over again
			continue;
		putchar(a);
	}
	//below showcase the code using 'loop for'
	//alert:the variable should be defined in the beginning 
	//for (i = 1; i = 1; i = 1)//expr1->expr2->stmt->expr3
	//{
	//	if (((a = getchar()) != EOF) && (a < '0' || a > '9'))
	//	{
	//		continue;
	//	}
	//	/*if ((a = getchar()) == EOF)
	//	{
	//		break;
	//	}*/
	//	putchar(a);
	//
	//}
	return 0;
}