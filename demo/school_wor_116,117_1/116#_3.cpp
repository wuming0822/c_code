#define _CRT_SECURE_NO_WARNINGS 1//������С�ж�
#include <stdio.h>
int main()
{
	printf("���������������(0-1)��");
	float inPut = 0;
	again:
	scanf("%f", &inPut);
	if (inPut < 0 && inPut > 1)
	{
		printf("���볬����Χ����������:");
		goto again;
	}
	else if (inPut < 1 / 4.0)
	{
		printf("�����ͣ�ע�⣡");
	}
	else if (inPut > 3 / 4.0)
	{
		printf("������������ͣ");
	}
	return 0;
}