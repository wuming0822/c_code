#include <stdio.h>
#include <math.h>
PanD_shui(int Num)//判断水仙花数
{
    if(Num > 9)
    {
        return PanD_shui(Num / 10) +  pow(Num % 10 , 3);
    }
    else
    return pow(Num,3);
}
PanD_su(int Num)//判断素数函数
{
    int i = 0;
    for(i = 2; i < Num ; i++)//循环判断
    {
        if(Num % i == 0)
        {
            return 0;
        }
        
    }
    return 1;

}
int main ()
{
    int Num = 0;
    printf("请输入一个素数");
    scanf("%d",&Num);
    if (PanD_su(Num))//调用函数
    {
        printf("%d为素数",Num);
    }
    else
    printf("%d不为素数",Num);
    printf("\n");
    return 0;
}