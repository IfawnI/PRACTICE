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
//        printf("移动盘子 1 从 %c 到 %c\n", source, destination);
//        return;
//    }
//
//    hanoi(n - 1, source, destination, auxiliary);
//    printf("移动盘子 %d 从 %c 到 %c\n", n, source, destination);
//    hanoi(n - 1, auxiliary, source, destination);
//}
//
//int main()
//{
//    int n;
//    printf("请输入盘子的数量：");
//    scanf("%d", &n);
//
//    printf("解决汉诺塔问题的步骤如下：\n");
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
		printf("请输入：");
		scanf("%d", &x);
		if (x < y)
			printf("猜小了\n");
		else if(x>y)
			printf("猜大了\n");
		else
			printf("猜对了\n");

	}
	return;
}

void printf_t()
{
	int i = 0;
	printf("*********************************\n");
	printf("*****1,start********2,exit*******\n");
	printf("*********************************\n");
	printf("请选择=>");
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