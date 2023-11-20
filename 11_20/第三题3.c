#include <stdio.h>
int main ()
{
    int i = 0 , n = 0 , day = 0 , tmp = 0 ;
    scanf("%d",&n);
    while (n > 0)
    {
        n  =  n / 2 - 2;
        day++;
    }
    printf("%d",day);
    printf("\n");
    return 0;
}