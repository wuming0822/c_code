#include<stdio.h>
int main()
{
    int i =0;
    printf("|");
    for(i = 0 ; i < 8 ; i++)
    {
        printf("----------|");
    }
    printf("\n");
    printf("|班次      ");
    printf("|出发站    ");
    printf("|到达站    ");
    printf("|出发时间  ");
    printf("|到达时间  ");
    printf("|历时      ");
    printf("|票价      ");
    printf("|剩余票数  |");

    return 0;
}