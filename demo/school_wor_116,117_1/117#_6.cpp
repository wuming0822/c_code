#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 0;
	printf("�����������");
	again://���¿�ʼ�����
	scanf("%d" , &num);
	if (num <= 100 && num >= 0)//�ж�����ķ����Ƿ񳬳���ֵ
	{
		num /= 10;//����ֵ��ʮλ�����룬��switch�е����ж�ʮ��λ����ֵ��С
		switch(num)
		{
		case 10:
			printf("����");
			break;
		case 9:
			printf("����");
			break;
		case 8:
			printf("����");
			break;
		case 7:
			printf("�е�");
			break;
		case 6:
			printf("����");
			break;
		default:
			printf("������");
		}
	}
	else
	{
		printf("����������Χ���������룺");
		goto again;
	}
	return 0;
}