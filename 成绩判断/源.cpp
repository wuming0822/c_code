#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	again:
	printf("������ɼ���");
	int achievement;
	scanf("%d", &achievement);
	if (achievement > 100 && 0 > achievement)
	{
		printf("����������Χ�����������룺");
		goto again;
	}
	switch (achievement / 10)//������ĳɼ���ȡ��ʮλ����Ȼ������switch���ȥ�ж�
	{
	case 10:
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
		break;
	}
	return 0;
}
