#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int i;
	int j = 0;
	scanf("%d", &n);
	int arr[2000];
	int count = 0;
	for (i = 0; i < n; i++) //���趨�����������
	{
		j++;
		scanf("%d", &arr[i]);
		while (j == n)  //����������Ƿ�����ͬ����
		{
			j = 0;
			for (i = 0; i < n; i++)
			{
				if (arr[i] == arr[j])  //Ѱ�������д��ڶ��ٸ���ͬ����
				{
					count++; //ͳ�Ƴ����˶��ٴ���ͬ������
					if (count >= 2) //���ظ�������ֻ���һ��
					{
						continue;
					}
				}
				printf("%d ", arr[i]);
			}
			j++;
		}
	}
	return 0;
}