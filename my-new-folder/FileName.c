#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int main()
//{
//
//	return 0;
//}
#include <stdio.h>
//
//void hanoi(int n, char source, char auxiliary, char destination)
//{
//    if (n == 1)
//    {
//        printf("�ƶ����� 1 �� %c �� %c\n", source, destination);
//        return;
//    }
//
//    hanoi(n - 1, source, destination, auxiliary);
//    printf("�ƶ����� %d �� %c �� %c\n", n, source, destination);
//    hanoi(n - 1, auxiliary, source, destination);
//}
//
//int main()
//{
//    int n;
//    printf("���������ӵ�������");
//    scanf("%d", &n);
//
//    printf("�����ŵ������Ĳ������£�\n");
//    hanoi(n, 'a', 'b', 'c');
//
//    return 0;
//}
//
//#include<string.h>
//
//int main()
//{
//	char arr[] ={'a','b','c'};
//	char arr1[] ={'a','b','c','\0'};
//	char arr2[] ="abc";
//	printf("%d\n", strlen(arr));
//	printf("%s\n", arr1);
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

#include<time.h>
#include<stdlib.h>

void game()
{
	int y = 0;
	srand((unsigned int)time(NULL));
	y = rand() % 100 + 1;
	int x=0;
	while (x!=y)
	{
		printf("�����룺");
		scanf("%d", &x);
		if (x < y)
			printf("��С��\n");
		else if(x>y)
			printf("�´���\n");
		else
			printf("�¶���\n");

	}
	return;
}

void printf_t()
{
	int i = 0;
	printf("*********************************\n");
	printf("*****1,start********2,exit*******\n");
	printf("*********************************\n");
	printf("��ѡ��=>");
	scanf("%d", &i);
	if (i == 1)
		game();
	else if (i == 2)
		return;
	else
		printf_t();
}

int main()
{
	printf_t();
	return 0;
}