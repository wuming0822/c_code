#include <stdio.h>
int gcb (int A , int B)//最大公约数//欧几里得算法
{
    if (A < B)
    {
        int tmp = A;
        A = B;
        B = tmp;
    }
    while(A % B != 0)
    {
        int and = A % B;
        A = B;
        B = and;
    }
    return B;//最小公约数
}
int lcm ()//最小公倍数
{

}
int main ()
{
    int a = 0 , b = 0;
    printf("请输入两个数：");
    scanf("%d%d",&a,&b);
    printf("%d和%d的公约数为：",a,b,gcb(a,b));
    return 0;
}