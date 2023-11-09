#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int N(int Num)//创建阶乘函数
{
    int i = 0;
    int tmp = 1;
    for (i = 1; i <= Num; i++)//循环
    {
        tmp = tmp * i;//阶乘
    }
    return tmp;
}
int main()
{
    int n = 0, m = 0;
    printf("C");
    scanf("%d %d", &n, &m);
    printf("CMN = %d", N(n) / (N(m) * N(n - m)));//调用函数
    return 0;
}
