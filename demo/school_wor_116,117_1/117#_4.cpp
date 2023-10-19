#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("请输入小时和分钟：");
	int H = 0;
	int M = 0;
	scanf("%d %d", &H,&M);
	printf("%02d:%02d",H,M);//输出控制如果不满足两位则向右对齐并自动补全数字0
	return 0;
}