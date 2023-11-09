#include <stdio.h>
int Dback (int A , int B)//创建递归函数
{
    if (B < 0)
    {
        B = -B;//先将B变为正数
        if (B > 1)
        {
            int X = A * Dback(A , B - 1 );//首先计算分母
            return 1 / X;//最后返回正确的结果
        }
        return A;
    }
    else if (B > 0)
    {
        if (B > 1)
        {
            return A * Dback(A , B - 1 );//函数递归
        }
        return A;
    }
    else if ( B = 0 )
    {
        return 1;
    }
}
int main ()
{
    int x = 0 , n = 0;
    printf("请输入变量X和X需要的幂次方：");
    scanf("%d%d",&x,&n);//接收输入的数字
    printf("%d的%d次方为：%d",x , n , Dback(x , n));//调用函数为

    return 0;
}