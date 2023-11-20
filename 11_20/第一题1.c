#include <stdio.h>
int main ()
{
    int Max = 0 , n = 0, a = 0 ;
    while(n != 0)
    {
        scanf("%d",&n);
        if(Max < n)
        {
            Max = n;
        }
    }
    printf("%d",n);
    return 0;
}