#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("������Сʱ�ͷ��ӣ�");
	int H = 0;
	int M = 0;
	scanf("%d %d", &H,&M);
	printf("%02d:%02d",H,M);//������������������λ�����Ҷ��벢�Զ���ȫ����0
	return 0;
}