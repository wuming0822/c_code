#include <stdio.h>
int main ()
{
    int i = 1;
    while(1)
    {
        if(i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10 )
        {
            printf("韩信的队伍至少有%d个兵",i);
            printf("\n");
            return 0;
        }
        i++;
    }
    return 0;
}