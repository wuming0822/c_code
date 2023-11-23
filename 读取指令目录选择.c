#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("********************************\n");
	printf("*****欢迎使用自助提款机系统*******\n");
	printf("********************************\n");
	printf("***********1. 查询**************\n");
	printf("***********2. 存款**************\n");
	printf("***********3. 取款**************\n");
	printf("***********4. 转账**************\n");
	printf("********************************\n");
	int a = 0;
	char tmp = 0;
	while (1)
	{
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("查询\n");
			printf("是否继续(y/n)");
			getchar();
			scanf("%c",&tmp);
			if (tmp == 'y')
			{
				continue;
			}
			else
			{
				return 0;
			}
			break;
		case 2:
			printf("存款\n");
			printf("是否继续(y/n)");
			getchar();
		
			scanf("%c", &tmp);
			if (tmp == 'y')
			{
				continue;
			}
			else
			{
				return 0;
			}
			break;

		case 3:
			printf("取款\n");
			printf("是否继续(y/n)");
			getchar();
	
			scanf("%c", &tmp);
			if (tmp == 'y')
			{
				continue;
			}
			else
			{
				return 0;
			}
			break;

		case 4:
			printf("转账\n");
			printf("是否继续(y/n)");
			getchar();
		
			scanf("%c", &tmp);
			if (tmp == 'y')
			{
				continue;
			}
			else
			{
				return 0;
			}
			break;
		}
	}

	return 0;
}