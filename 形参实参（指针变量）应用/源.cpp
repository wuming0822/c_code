#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int* x, int* y)
{	
	int map = 0;
	map = *x;
	*x = *y;
	*y = map;

}
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("a=%d\nb=%d", a, b);
	return 0;
}