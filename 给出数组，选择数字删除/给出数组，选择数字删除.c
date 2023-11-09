#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int dret = 0;
	int N = 0;
	int arr[50] = { 0 };
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d",&n);
	for (i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&dret);
	/*for (int X = 0 ; X < count ;X++)
	{
		for (i = 0; i < n; i++)
		{
			if (arr[i] == 0)
			{
				while (i < n - 1)
				{
					int tmp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = tmp;
					i++;
				}
			}
		}
	}
	for (i = 0 ; i < (n - count) ; i++)
	{
		printf("%d ",arr[i]);
	}
	*/
	int j = 0;
	int arr1[50] = {0};
	for (i = 0 ,j = 0 ; i < n ; i++)
	{
		if (arr[i] != dret)
		{
			arr1[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d",arr[i]);
	}

	return 0;
}