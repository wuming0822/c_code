#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "panD_S.h"
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (panD_S(a))
	{
		printf("%d������\n", a);
	}
	else
	printf("%d��������", a);
	return 0;
}