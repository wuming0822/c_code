#include <stdio.h>
#include <math.h>//包含头文件math.h
int main ()
{
    int a = 0 , b = 0 , c = 0;//初始化
    printf("请输入各三边长度:");
    scanf("%d %d %d", &a ,&b ,&c);//进行输入赋值
    int p = (a + b + c) / 2;
    int S = 0;
    S = sqrt (p * (p - a) * (p - b) * (p - c));//引用计算公式
    printf("三角形面积为：%d\n", S);//进行输出
    return 0;
}