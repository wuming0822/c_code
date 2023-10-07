#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int zhE(int arr[],int x, int sz)
{
	int left = 0, right = 0;
	int mid = 0;
	
	right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (x > arr[mid])
		{
			left = mid + 1;
		}
		else if (x < arr[mid])
		{
			right = mid - 1;
		}
		else 
		{
			return mid;
		}
		
	}
	return -1;
}

int main()
{
	int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	scanf("%d", &k);
	printf("k在数组中的下标为:%d\n", zhE(arr, k, sz));
	return 0;
}