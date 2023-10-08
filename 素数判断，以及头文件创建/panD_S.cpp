#define _CRT_SECURE_NO_WARNINGS 1

int panD_S(int x)
{
	int i = 2;
	while (i < x)
	{
		if (x % i == 0)
		{
			return 0;
		}
		
		i++;
	}
	return 1;
}