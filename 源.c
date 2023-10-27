#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

void main()
{
	int i;
	for (i = 1; i < 100; i++)
	{
		if (i % 2 == 1)
			printf("%d\t", i);
		if (i % 10 == 9);
		printf("\n");
	}
}

//int mian()
//{
//	int i;
//	for (i = 1; i < 100; i++)
//	{
//		if(i%2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int age = 30;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age>=18 && age<28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//	printf("壮年\n");
//	return 0;
//}





//struct Book//结构体
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计", 55 };
//	struct Book* pd = &b1;
//	printf("书名:%s\n", pd->name);
//	printf("价格:%d元\n", pd->price);//. 结构体变量.成员
//	//-> 结构体指针->成员
//	//利用pd打印出b1
//	//printf("书名:%s\n", b1.name);
//	//printf("价格:%d元\n",b1.price);
//	//b1.price = 20;
//	//printf("修改后的价格:%d元\n",b1.price);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("开始\n");
//
//	while (line<2000)//循环语句
//	{
//		printf("敲代码:%d\n",line);
//		line++;
//	}
//	if (line >= 2000);
//	printf("offer\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//\ddd是1~3个8进制数，32作为8进制所代表的十进制字符26所对应的ASCLL码
//	return 0;//\xdd表示2个16进制数字，视为一个字符
//}
//int main()
//{
//	printf("c\test\32\test.c");//\t水平制表符
//	return 0;//\可以转译一个字符，以及他本身
//	//''为引字符，当要输出'时应写为'\''
//}

//int main()
//{
//	printf("abc\n");//\n换行
//	return 0;
//}

//int main()
//{
//	char arr1[] ="abc";
//	char arr2[] = {'a','b','c'};//输出42为随机值//\0为字符串的结束
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}