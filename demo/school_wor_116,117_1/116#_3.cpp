#define _CRT_SECURE_NO_WARNINGS 1//油量大小判断
#include <stdio.h>
int main()
{
	printf("请输入油量表读数(0-1)：");
	float inPut = 0;
	again:
	scanf("%f", &inPut);
	if (inPut < 0 && inPut > 1)
	{
		printf("输入超过范围请重新输入:");
		goto again;
	}
	else if (inPut < 1 / 4.0)
	{
		printf("油量低，注意！");
	}
	else if (inPut > 3 / 4.0)
	{
		printf("高油量，不必停");
	}
	return 0;
}