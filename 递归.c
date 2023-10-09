#include <stdio.h>
void nUms (int x)
{
    if (x > 9)
    {
        nUms(x / 10);
    }
    printf("%d ",x % 10);
}
int main()
{
    int a = 0;
    scanf("%d" , &a);
    nUms(a);
    return 0;
}