#include <stdio.h>//n的阶乘
int main ()
{
    printf("请输入一个需要阶乘的数字");
    int n = 0 ;
    int tmp = 1 ;
    int i = 0 ;
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++)
    {
        tmp = i * tmp;
    }
    printf("%d阶乘为%d",n,tmp);
    printf("\n");
    return 0;
}