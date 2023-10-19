#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int judge_RunYear (int year)//判断是否为闰年，是闰年则返回 1 ，否则返回 0
{
	if (year % 4 == 0 || year % 100 == 0)
	{
		return 1;
	}
	return 0;
}
int Num_year(int year,int M)//输出在指定年份时相应月份的天数
{
	int month = 0;
	switch (M)//通过月份的月数进入switch分支语句分成3类，31天的月份，30天的月份，单独区分的2月
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		month = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		month = 30;
		break;
	case 2://如果月份2月，则进入闰年判断函数，如果为闰年输出29天，如果不为闰年输出28天
		month = (judge_RunYear(year)) ? 29 : 28;//三目操作符，如果闰年输出29天，不是闰年输出28天
		break;
	default:
		return -1;
	}
	return month;
}
int main()
{
	int year = 0;
	int M = 0;
	printf("请输入年 月：");
	again:
	scanf("%d %d",&year ,&M);
	if (M > 0 && M < 13)//检测月份是否超出范围
	{
		printf("本月天数为%d天", Num_year(year,M));
	}
	else
	{
		printf("月份数值超出范围，请重新输入：");
		goto again;
	}
	return 0;
}