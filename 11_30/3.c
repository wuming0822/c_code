#include <stdio.h>
int main ()
{
    printf("array a:");
    int i = 0 ,j = 0 ,c = 0;
    int arrB[6]  = {0};
    int arrA[2][3] = {1,2,3,4,5,6};
    for(i = 0 ;  i < 2 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d ",arrA[i]);
            arrB[c] = arrA[i][j];
            c++;
        }
        printf("\n");
    }
    printf("array b");
    for(i = 0 ; i< 6 ; i++)
    {
        printf("%d ",arrB[i]);
        if(i = 2)
        {
            printf("\n");
        }
    }
    return 0;
}