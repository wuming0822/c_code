#include <stdio.h>
int main ()
{
    int max = 0 , i = 0 , j = 0;
    int arr[3][4];
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            scanf("%d",&arr[i][j]);
            if(max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("%d",max);
    return 0;
}