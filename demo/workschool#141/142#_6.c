#define _CRT_SECURE_NO_WARNINGS 1//斐波那契数列
#include <stdio.h>
int main()
{
	int a = 1;//第一个月兔子的数量
	int b = 1;//第二个月兔子的数量
	int c = 0;
	int i = 0;
	for (i = 1 ; i <= 12  ; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("第%d月的兔子对数为%d\n",i, c);
	}
	printf("最后共有%d对兔子 \n",c);
	return 0;
