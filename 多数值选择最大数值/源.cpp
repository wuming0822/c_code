#define _CRT_SECURE_NO_WARNINGS 1
//在输入的4个数值当中 选择最大的数值
#include <stdio.h>

//vsion 1.0

//int main()
//{
//	
//	int a = 0;
//	int arr[4] = { 0 };
//	int max = 0;
//	int i = 0;        //i变量用于控制循环的范围 
//	//进行变量，数组的创建； 
//	while (i<4)//创建循环 将输入的四个值分别放入数组arr当中
//
//	{
//		scanf("%d", &arr[i]); //将输入的四个值分别放入数组arr当中
//		if (arr[i] > max) //进行比较，如果成功 则将arr[当前值] 赋值到max身上
//			max = arr[i];
//		
//
//		i++;
//	}//在循环结束后，得到的max就为最大值
//
//	printf("%d\n", max);//进行最大值的输出
//
//
//	return 0;
//}

//vsion 2.0

//int main()
//{
//
//
//	int arr[4] = { 0 };
//	int i = 0;
//
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		
//		i++;
//
//	}
//
//	int MAX = 0;
//	i = 0;
//	
//	while (i < 4)
//	{
//		if (arr[i] > MAX)
//			MAX = arr[i];
//
//
//		i++;
//
//	}
//
//	printf("%d ", MAX);
//
//	return 0;
//}