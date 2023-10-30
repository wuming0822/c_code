#include <stdio.h> 
int banana_fuctionc(day)//香蕉递归函数
{
    if (day > 1)
    {
        return banana_fuctionc(day - 1) * 2 + 1;
    }
    else
    return 1;
}
int main ()
{
    int x = 0;
    int Num = 0;
    int day = 0;
    scanf("%d",&day);
    printf("香蕉个数为：%d",banana_fuctionc(day));//调用函数
    printf("\n");
    return 0;
}