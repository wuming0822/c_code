#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int suShu(int x)
//{
//	int i = 1;
//	int a = 1;
//	if (x % 2 == 1)
//	{
//		while (x >= i)
//		{
//			if (x % (i + 1) != 0)
//			{
//				i++;
//				a++;
//			}
//			else
//			{
//				break;
//			}
//		}	
//	}
//	if (a == x)
//		return 1;
//	return 0;
//}
//
//
//
//int main()
//{	
//	int X = 0;
//	scanf("%d", &X);
//	printf("%d\n", suShu(X));
//	return 0;
//}

//在100到200之间输出所有的素数
//int main()
//{
//	int Art = 1;
//	int i = 0;
//	for (i = 100; i <= 200; i++,Art++)
//	{
//		if (i % Art + 1 == 0)
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}

int PanD(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int A = 0;
	scanf("%d", &A);
	if (PanD(A) == 1)
	{
		printf("为素数");
	}
	else
	{
		printf("不为素数");

	}





	return 0;
}