#include <stdio.h>
int main ()
{
    int i = 0 ; 
    int n = 0 ;
    int a = 0;
    while(1)
    {
        scanf("%d",&n);
        if(n > 60)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    }
    return 0;
}