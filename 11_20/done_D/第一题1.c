#include <stdio.h>
int main ()
{
    int Max = 0 , n = 1, a = 0 ;
    while(n != 0)
    {
        scanf("%d",&n);
        if(Max < n)
        {
            Max = n;
        }
    }
    printf("%d",Max);
    return 0;
}