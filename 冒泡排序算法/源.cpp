#define _CRT_SECURE_NO_WARNINGS 1//ð������
#include <stdio.h>
//����������ֵ����
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void moPo(int arr[], int sz)//����ð�������㷨����
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);//���ý�����ֵ����
			}
		}
	}
}
int main()
{
	
	int arr[] = { 51,5,39,2,4,9,31,22,67,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int X = 0;
	printf("�������Ԫ�طֱ�Ϊ��");
	for (X = 0; X < sz; X++)
	{
		printf("%d ", arr[X]);
	}
	printf("\n");
	moPo(arr,sz);
	printf("���������Ϊ��");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//��ȷд��
/*
void moPo(int arr[], int sz)//����ð�������㷨����
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
*/

//����д��
/*
void moPo (int arr[], int sz)//����
{
	int i = 0;
	while (i < sz - 1)
	{
		int AMD = i;
		for (i = 0; i < sz - 1 - i; i++)
		{
			if (arr[i+1] < arr[i])
			{
				int tmp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = tmp;
			}
		}
		i = AMD;
		i++;
	}
}
*/