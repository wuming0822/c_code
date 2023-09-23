#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//’€∞Î≤È’“	2023_9_22;
int main()
{
	int k = 0;
	scanf("%d", &k);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int left = 0;
	int mid = 0;
	int right = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	left = 0;
	right = sz;

	while ( left <= right)
	{
		mid = (left + right) / 2;

		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
		{
			printf("%d", mid);
			break;
		}
	}
	return 0;
}