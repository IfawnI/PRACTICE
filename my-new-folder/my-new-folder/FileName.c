#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void my_strcpy(char* dest, char* str)//��һ��ʵ�ַ�ʽ
//{
//	while (*str != '\0')
//	{
//		*dest = *str;
//		str++;
//		dest++;
//	}
//	*dest = *str;
//}

//void my_strcpy(char* dest, char* str)//�ڶ��ַ�ʽ����ֹ���δ�����Խ�����
//{
//	if (dest != NULL && str != NULL)
//	{
//		while (*dest++ = *str++)//��++�������ϵ���ֵ�����У����Ӽ��
//		{
//			;
//		}
//	}
//}

#include<assert.h>
char* my_strcpy(char* dest,const char* str)//const*str,str���ܱ��ı�
{
	char* ret = dest;
	assert(dest != NULL);//ʹ�ö��ԣ��������ʾ,������ͷ�ļ�
	assert(str != NULL);
	//��strָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
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
	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
	return 0;
}