#include <stdio.h>
int main ()
{   
    int a = 0;
    int arr[3] = {};
    int i = 0;
    again://重新输入的goto目标点
    printf("请输入一个三位整数：");
    scanf("%d", &a);//进行输入赋值
    if (100 <= a && a <=999)//判断语句如果输入超过目标数值进行重新输入
    {
        for(i = 0 ; i < 3 ; i++)//将数值分离各位并放入到各个数组当中
        {
            arr[i] = a % 10;
            a = a / 10;
        }
        printf("和为：%d\n", arr[0]+ arr[1]+arr[2]);//语句输出
        printf("乘积为：%d\n", arr[0]*arr[1]*arr[2]);
    }
    else 
    {
        printf("请输入正确格式\n");
        goto again;
    }
    return 0;
}