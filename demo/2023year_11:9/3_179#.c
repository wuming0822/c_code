#include <stdio.h>
int isPrime (int x)//创建判断素数函数
{
    int i = 0;
    for (i = 2 ; i < x ; i++)//循环
    {
        if (x % i == 0)//如果不为素数则输出0
        {
            return 0;
        }
    }
    return 1;//如果为素数则输出1
}
int main()
{
    int count = 0;
    int i = 0;
    for (i = 0; i <= 1000 ; i++)//循环输出到1000以内的数字
    {
        if (isPrime(i) == 1)
        {
            count++;
            printf("%d ",i);
        }
        if (count == 8)//每输出8个数字换行
        {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}