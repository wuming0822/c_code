#include <stdio.h>
int Fuction_Sum(int Num)//创建用于相加从1到N的的阶乘的函数
{
    int i = 0;
    int tmp = 1;
    for (i = 1 ; i<= Num; i++)
    {
        tmp = tmp * i;
    }
    if(Num > 0)
    {
        return Fuction_Sum(Num - 1) + tmp;
    }
    return tmp - 1;
}
int main ()
{
    printf("请输入一个数字");
    int Num = 0;
    scanf("%d",&Num);
    int i = 0;
    for(i = 1 ; i <= Num ; i++)
    {
        printf("%d ! ",i);
        if(i < Num )
        {
            printf("+");
        }
    }
    printf("=");
    printf("%d",Fuction_Sum(Num));
    printf("\n");
    return 0;
}