#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DigitSum(int Num)//����ÿλ���ֲ����
{
	int tmp = 0, acs = 0;
	if (Num > 9)
	{
		return DigitSum(Num / 10) + Num %10;//ÿ�εķ���ֵ���������ڲ���������ֺ͵�ǰ���㺯��������ĸ�λ
		
	}
	return Num;

	
}
/*
����д����
int DigitSum(int Num)
{
	int tmp = Num % 10;
	if (Num > 9)
	{
		tmp = DigitSum(Num / 10) + tmp;
	}

	return tmp;
}
*/
int main()
{
	int Num = 0;
	scanf("%d", &Num);
	printf("%d",DigitSum(Num));
	return 0;
}