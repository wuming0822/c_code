#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int My_Strlen(char *arr)//�ݹ����ڼ����ַ������ȵĺ���
{
	int DAdd = 1;
	int X = 0;
	if (*arr != '\0')
	{
		X = My_Strlen(arr + 1) + 1;
	}
	return X;
}

void Sever_String_Change(char *arr)//�����ַ�������
{
	char tmp = *arr;//1
	int len = My_Strlen(arr);//2
	*arr = *(arr + len - 1);//3
	*(arr + len - 1) = '\0';//4
	if (arr+1 < arr + len - 1)//ͨ���жϸ���Ԫ�ص��ڴ��ַ��λ��С�����Ƚ�
	{
		Sever_String_Change(arr + 1);//5
	}
	*(arr + len - 1) = tmp;//6
}
int main()
{
	char arr[] = "abcdefghijkmon";
	int sz = My_Strlen(arr);
	Sever_String_Change(arr);//���õ����ַ�������
	int i = 0;
	printf("%d\n",sz);
	for (i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}