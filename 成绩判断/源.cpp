#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	again:
	printf("请输入成绩：");
	int achievement;
	scanf("%d", &achievement);
	if (achievement > 100 && 0 > achievement)
	{
		printf("超出评估范围，请重新输入：");
		goto again;
	}
	switch (achievement / 10)//将输入的成绩提取出十位数，然后利用switch语句去判断
	{
	case 10:
	case 9:
		printf("优秀");
		break;
	case 8:
		printf("良好");
		break;
	case 7:
		printf("中等");
		break;
	case 6:
		printf("及格");
		break;
	default:
		printf("不及格");
		break;
	}
	return 0;
}
