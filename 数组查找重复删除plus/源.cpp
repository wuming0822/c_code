#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 0, count = 0;//�涨����ѭ������������ѭ���������ڲ�ѭ����������Ǳ���
	int arr[2000]; 
	scanf("%d",&n);
	for (i = 0 ; i < n ; i++)//��ѭ����1.�Ը�λԪ�ؽ��и�ֵ 2.�Ե�ǰѭ��Ԫ�ؽ��в�ѯ���Ƿ�����ǰԪ���ظ�
	{
		count = 0;
		scanf("%d", &arr[i]);
		for (j = 0; j < i; j++)//�����ж��Ƿ�����ǰԪ���ظ�
		{
			if (arr[i] == arr[j] && i != j) count++;//����ظ�����ж�
		}
		if (count == 0)
			printf("%d ", arr[i]);//���д�ӡ������ֱ������
		else continue;
	}
	return 0;
}