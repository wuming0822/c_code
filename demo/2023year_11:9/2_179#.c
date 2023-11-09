#include <stdio.h>
int min (int A,int B)//创建比较函数min
{
    if(A > B)//进行判断
    {
        return B;
    }
    else
    {
        return A;
    }
}
int main ()
{
    int a = 0 , b = 0 , c = 0;
    int tmp = 0;
    printf("请输入三个数：");
    scanf("%d%d%d",&a,&b,&c);
    tmp = min(a,b);//调用函数
    printf("最小值为:%d",min(tmp,c));//调用函数
    return 0;
}