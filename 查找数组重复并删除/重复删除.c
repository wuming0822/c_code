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
	for (i = 0; i < n; i++) //将设定的数组数输出
	{
		j++;
		scanf("%d", &arr[i]);
		while (j == n)  //检查数组中是否有相同的数
		{
			j = 0;
			for (i = 0; i < n; i++)
			{
				if (arr[i] == arr[j])  //寻找数组中存在多少个相同的数
				{
					count++; //统计出现了多少次相同的数字
					if (count >= 2) //将重复的数字只输出一次
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