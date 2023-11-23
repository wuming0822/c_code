#include <stdio.h>
int main ()//欧几里得算法
{
    int input0 = 0 , input1 = 0 ;//计算变量0，1
    int tmp = 0;//创建中间变量
    scanf("%d %d",&input0,&input1);
    if(input0 < input1)//如果右边的数值大于左边的数值，进行swap
    {
        tmp = input0;
        input0 = input1;
        input1 = tmp; 
        tmp = 0 ;
    }
    while(input0 % input1 != 0)
    {
        tmp = input0 % input1;
        input0 = input1;
        input1 = tmp;
    }
    printf("%d",input1);

    return 0;
}