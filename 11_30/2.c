#include <stdio.h>
int main ()
{
    int i = 0 , j = 0 ,count = 0;
    int arr[3][4] = {0};
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            scanf("%d",&arr[i][j]);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}