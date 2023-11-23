#include <stdio.h>
int main ()
{
    int n = 0 ,tmp = 0, i = 0 , a = 0;
    for(i = 1 ; i <= n ; i++ )
    {
        a = 1 / 3*i - 2;
        tmp = a + tmp;
    }
    printf("%d",tmp);
    return 0;
}