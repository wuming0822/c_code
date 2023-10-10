#include <stdio.h>
int main ()
{
    float F = 0;
    scanf("%f", &F);
    printf("摄氏温度为：%.2f\n", 5.0/9*(F - 32.0));
    return 0;
}