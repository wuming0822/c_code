#include <stdio.h>
#include <math.h>//包含头文件math.h
int main ()
{   
    float a = 0 , b = 0 , c = 0;//初始化
    printf("请输入各三边长度:");
    again:
    scanf("%f %f %f", &a ,&b ,&c);//进行输入赋值
    if (a + b > c && a + c > b && c + b > a)
    {
    float p = (a + b + c) / 2;
    float S = 0;
    S = sqrt (p * (p - a) * (p - b) * (p - c));//引用计算公式
    printf("三角形面积为：%.2f\n", S);//进行输出
    }
    else
    {
        printf("不能构成三角形,请重新输入\n");
        goto again;
    }
    return 0;
}