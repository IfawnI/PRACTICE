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
//		printf("δ����\n");
//	else if (age>=18 && age<28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//	printf("׳��\n");
//	return 0;
//}





//struct Book//�ṹ��
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������", 55 };
//	struct Book* pd = &b1;
//	printf("����:%s\n", pd->name);
//	printf("�۸�:%dԪ\n", pd->price);//. �ṹ�����.��Ա
//	//-> �ṹ��ָ��->��Ա
//	//����pd��ӡ��b1
//	//printf("����:%s\n", b1.name);
//	//printf("�۸�:%dԪ\n",b1.price);
//	//b1.price = 20;
//	//printf("�޸ĺ�ļ۸�:%dԪ\n",b1.price);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("��ʼ\n");
//
//	while (line<2000)//ѭ�����
//	{
//		printf("�ô���:%d\n",line);
//		line++;
//	}
//	if (line >= 2000);
//	printf("offer\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//\ddd��1~3��8��������32��Ϊ8�����������ʮ�����ַ�26����Ӧ��ASCLL��
//	return 0;//\xdd��ʾ2��16�������֣���Ϊһ���ַ�
//}
//int main()
//{
//	printf("c\test\32\test.c");//\tˮƽ�Ʊ��
//	return 0;//\����ת��һ���ַ����Լ�������
//	//''Ϊ���ַ�����Ҫ���'ʱӦдΪ'\''
//}

//int main()
//{
//	printf("abc\n");//\n����
//	return 0;
//}

//int main()
//{
//	char arr1[] ="abc";
//	char arr2[] = {'a','b','c'};//���42Ϊ���ֵ//\0Ϊ�ַ����Ľ���
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}