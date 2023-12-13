#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[50] = {0};//字符数组赋值函数
	for (int i = 0 ; i < 50 ; i++)
	{
		char ch = getchar();
		if (ch == '\n')
		{
			break;
		}
		arr[i] = ch;
	}
	
	
	return 0;
}