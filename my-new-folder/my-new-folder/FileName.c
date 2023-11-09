#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void my_strcpy(char* dest, char* str)//第一种实现方式
//{
//	while (*str != '\0')
//	{
//		*dest = *str;
//		str++;
//		dest++;
//	}
//	*dest = *str;
//}

//void my_strcpy(char* dest, char* str)//第二种方式，防止传参错误导致越界访问
//{
//	if (dest != NULL && str != NULL)
//	{
//		while (*dest++ = *str++)//将++步骤整合到赋值步骤中，更加简洁
//		{
//			;
//		}
//	}
//}

#include<assert.h>
char* my_strcpy(char* dest,const char* str)//const*str,str不能被改变
{
	char* ret = dest;
	assert(dest != NULL);//使用断言，出错会提示,需引用头文件
	assert(str != NULL);
	//把str指向的字符串拷贝到dest指向的空间，包含'\0'字符
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "*****************";
	char arr2[] ="hello";
	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
	return 0;
}