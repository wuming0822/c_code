#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	printf("�������ַ���:\n");
	int arr[5] = {};//������������ѭ����䵱��
	int i = 0;//����ѭ����������ʼ����

	while ( i < 5 )//ѭ����䣬ѭ����Σ��жϣ�
	{
		scanf("%c", &arr[i]);//�����ַ������룬��ѭ���Ĺ��������ζ������5����и�ֵ
		arr[i] = arr[i] + 4;//��acsii��ת���������ٽ���+4
		printf("%c", (char)arr[i]);//��������˳���ӡ�ַ�
		i++;//��������
	}

	return 0;
}