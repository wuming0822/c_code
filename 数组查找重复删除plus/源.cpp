#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 0, count = 0;//规定数组循环次数变量，循环变量，内层循环变量，标记变量
	int arr[2000]; 
	scanf("%d",&n);
	for (i = 0 ; i < n ; i++)//主循环：1.对个位元素进行赋值 2.对当前循环元素进行查询，是否与先前元素重复
	{
		count = 0;
		scanf("%d", &arr[i]);
		for (j = 0; j < i; j++)//用于判断是否与先前元素重复
		{
			if (arr[i] == arr[j] && i != j) count++;//如果重复标记判断
		}
		if (count == 0)
			printf("%d ", arr[i]);//进行打印，否则直接跳过
		else continue;
	}
	return 0;
}