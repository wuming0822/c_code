����l_l:
[��������]

����l_l:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[2000];//����һ�������жϵ�����
	int arr1[2000];//�������ڱ�ʾ������
	int i = 0; 
	int n = 0;
	int a = 0;
	scanf("%d",&n);
	for (i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0 ; i < n ; i++)
	{
		arr1[i] = arr[i];//������������ͬ����
	}
	//��ʼ�����ظ���
	int count = 0;
	int count1 = 0;//����������Ǳ���
	int j = 0;
	for (i = 0 ; i < n ;i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			if (arr1[i] == arr[j])
			{
				count++;
			}
		}
		if (count > 1)
		{
			arr1[i] = 0;
			count1++;
		}
		count = 0;
	}
	int t = 0;
	for (i = 0 ; i < n ; i++)
	{
		if (arr1[i] != 0)
		{
			arr1[t] = arr1[i];
			t++;
		}
	}
	for (i = 0 ; i < n - count1 ; i++)
	{
		printf("%d ",arr1[i]);
	}

	return 0;
}

