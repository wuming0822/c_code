#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "panD_S.h"
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (panD_S(a))
	{
		printf("%d是素数\n", a);
	}
	else
	printf("%d不是素数", a);
	return 0;
}