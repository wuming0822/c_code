#define _CRT_SECURE_NO_WARNINGS 1//冒泡排序
#include <stdio.h>
//创建交换数值函数
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void moPo(int arr[], int sz)//创建冒泡排序算法函数
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//创建整体循环的函数
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//创建用于每一次大体循环的的函数
		{
			if (arr[j] < arr[j + 1])//每当左边大于右边时，两边的数值就会交换
			{
				swap(&arr[j], &arr[j + 1]);//调用交换数值函数
			}
		}
	}
}
int main()
{
	
	int arr[] = { 51,5,39,2,4,9,31,22,67,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int X = 0;
	printf("数组各个元素分别为：");//展现冒泡降序排序之前的数组中的元素
	for (X = 0; X < sz; X++)
	{
		printf("%d ", arr[X]);
	}
	printf("\n");
	moPo(arr,sz);//调用冒泡函数
	printf("降序排序后为：");//展示冒泡降序排序之后的数组中的元素
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//对于冒泡排序的写法，正确的写法为：
//正确写法
/*
void moPo(int arr[], int sz)//创建冒泡排序算法函数
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

//错误写法
/*
void moPo (int arr[], int sz)//创建
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
