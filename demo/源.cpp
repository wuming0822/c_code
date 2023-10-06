#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	printf("请输入字符串:\n");
	int arr[5] = {};//创建数组用于循环语句当中
	int i = 0;//创建循环变量（初始化）

	while ( i < 5 )//循环语句，循环五次（判断）
	{
		scanf("%c", &arr[i]);//进行字符的输入，在循环的过程中依次对数组的5项进行赋值
		arr[i] = arr[i] + 4;//用acsii码转换成整数再进行+4
		printf("%c", (char)arr[i]);//按照输入顺序打印字符
		i++;//（调整）
	}

	return 0;
}