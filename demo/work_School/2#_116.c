#include <stdio.h>
int main ()
{
    int a = 0 , b = 0 , c = 0 ;
    printf("请输入能够组成三角形的三组数值\n");
    again:
    scanf("%d %d %d", &a ,&b ,&c);
    if (a + c > b && a + b > c && c + b > a)//是否为三角形的判断
    {
        if (a * a + b * b == c * c)
        {
            printf("此三角形为直角三角形");
        }
        else if (a == b == c)
        {
            printf("此三角形为等边三角形");
        }
        else if ((a == b || c == a || b == c) && (a != b || a != c || b != c))
        {
            printf("此三角形为等腰三角形");
        }
        else
        printf("此三角形为普通三角形");
    }
    else
    {
    printf("不能构成三角形，请输入能够组成三角形的任意三组数值\n");
    goto again;//如果输入的不能构成三角形，回到输入数值的阶段
    }
    return 0;
}