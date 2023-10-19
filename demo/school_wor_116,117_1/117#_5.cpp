#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float num1 = 0, num2 = 0;
	char command = 0;//用于接收计算符号的字符变量
	printf("请输入：数字 计算符号 数字 则选择相应计算法则");
	again:
	scanf("%f %c %f", &num1 ,&command, &num2);//接收数值 计算符号 数值
	switch (command)//利用switch语句对于四种基本的计算符号进行判断，如果判断成功
	{               //则会进行相应的函数计算，如果识别失败，则会提示重新输入
	case '+':
		printf("计算结果为：%.2f", num1 + num2);
		break;
	case '-':
		printf("计算结果为：%.2f", num1 - num2);
		break;
	case '/':
		printf("计算结果为：%.2f", num1 / num2);
		break;
	case '*':
		printf("计算结果为：%.2f", num1 * num2);
	default :
		printf("输入错误，请重新输入正确的计算符号：");
		goto again;
	}
	return 0;
}