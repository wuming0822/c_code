#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
int achievment(int Num)
{
	int tmp = 0;
	int Num1 = Num;
	while (1)
	{
		tmp = pow(Num % 10, 3) + tmp;
		if (Num < 10)
			break;
		Num = Num / 10;
	}
	if (tmp == Num1)
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
	for (i = 0 ; i < 100000 ; i++)
	{
		if (achievment(i))
		printf("%d\n",i);
	}
	return 0;
}