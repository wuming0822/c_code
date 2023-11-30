#include <stdio.h>
int main()
{
    int arr[13] = {0};
    int i = 0 ; 
    int n = 13 ;
    for(i = 0 ; i < n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    int min = 100 ;
     for(i = 0 ; i < n ; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    int countMin = 0,countMax = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(arr[i] == min && countMin == 0)
        {
            arr[i] = 0;
            countMin++;
        }
        if(arr[i] == max && countMax ==0)
        {
            arr[i] = 0;
            countMax++;
        }
    }
    int tmp = 0;
    for(i = 0 ; i < n ;i++)
    {
        tmp = arr[i] +tmp;
    }
    printf("%d",tmp /11);

    return 0;
}