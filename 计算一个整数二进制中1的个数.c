#define _CRT_SECURE_NO_WARNINGS 1//����һ��������������1�ĸ���
#include <stdio.h>
int main()
{
	int i = 0;
	int a = 7;
	int tmp = 0;
	int Num = 0;//�����ĸ���Ҫ�õ��ı���
	for (i = 0 ; i < 32 ; i++)//ѭ��32��
	
	{
		tmp = a & 1;//�ж�a�����һλ�Ƿ�Ϊ1
		a >>= 1;
		Num = tmp + Num;//���Ϊ1��Num��1
	}
	printf("%d",Num);//���Num
	return 0;
}