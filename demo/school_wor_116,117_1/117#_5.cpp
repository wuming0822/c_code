#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float num1 = 0, num2 = 0;
	char command = 0;//���ڽ��ռ�����ŵ��ַ�����
	printf("�����룺���� ������� ���� ��ѡ����Ӧ���㷨��");
	again:
	scanf("%f %c %f", &num1 ,&command, &num2);//������ֵ ������� ��ֵ
	switch (command)//����switch���������ֻ����ļ�����Ž����жϣ�����жϳɹ�
	{               //��������Ӧ�ĺ������㣬���ʶ��ʧ�ܣ������ʾ��������
	case '+':
		printf("������Ϊ��%.2f", num1 + num2);
		break;
	case '-':
		printf("������Ϊ��%.2f", num1 - num2);
		break;
	case '/':
		printf("������Ϊ��%.2f", num1 / num2);
		break;
	case '*':
		printf("������Ϊ��%.2f", num1 * num2);
	default :
		printf("�������������������ȷ�ļ�����ţ�");
		goto again;
	}
	return 0;
}