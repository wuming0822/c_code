#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 0;
	printf("请输入分数：");
	again://重新开始的起点
	scanf("%d" , &num);
	if (num <= 100 && num >= 0)//判断输入的分数是否超出数值
	{
		num /= 10;//将数值的十位数分离，在switch中单独判断十分位的数值大小
		switch(num)
		{
		case 10:
			printf("优秀");
			break;
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
		}
	}
	else
	{
		printf("超出分数范围请重新输入：");
		goto again;
	}
	return 0;
}