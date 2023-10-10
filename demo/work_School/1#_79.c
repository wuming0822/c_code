#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    printf("请输入长和宽：\n");
    scanf("%d %d", &a,&b);
    printf("面积为：%d\n", a * b);
    return 0;
}