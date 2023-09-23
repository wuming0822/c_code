#define _CRT_SECURE_NO_WARNINGS 1
//2023_9_22Î´Íê³É
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = { "dreamsky_wuming" };
	char arr2[] = { "###############" };
	int left = 0;
	int right = 0;
	int sz = 0;
	right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;

	while (right >= left)
	{
		arr2[left] = arr1[right];
		for (i =0 ; i < sz -2 ; i++)
		{
			printf("%c", arr2[i]);

		}




	}




	return 0;

}