#include <stdio.h>
int main ()
{
    int a = 0 ,b = 0, c = 0;//初始化
    scanf("%d %d %d", &a,&b,&c);
    int sum = a + b + c;//求和
    int pre = (a + b + c) / 3;//求平均数
    printf("和为：%d\n", sum);//进行输出打印
    printf("平均数为：%d\n", pre);
    return 0;
}