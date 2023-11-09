#include <stdio.h>
int N! (int Num)//创建阶乘函数
{
    int i = 0;
    for (i = 0 ; i < Num ; i++)//循环
    {
        Num = Num * i;//阶乘
    }
    return Num;
}
int main ()
{
    int n = 0 , m = 0;
    printf("C");
    scanf("%d%d",&n,&m);
    printf("CMN = %d",N!(n) / N!(m) * N!(n-m));//调用函数
    return 0;
}