#include <stdio.h>
int main ()
{
    printf("====================MENU=====================\n");
    printf("\n");
    printf("fabs----------------------------------------1\n");
    printf("sqrt----------------------------------------3\n");
    printf("pow-----------------------------------------2\n");
    printf("sin-----------------------------------------4\n");
    printf("exit----------------------------------------5\n");
    printf("\n");
    printf("请输入选项:");
    int i = 0;
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        printf("fabs");
        break;
    case 2:
        printf("sqrt");
        break;
    case 3:
        printf("pow");
        break;
    case 4:
        printf("sin");
        break;
    case 5:
        returnn 0;
        break;
    default :
        printf("输入错误");
        break;
    }
    return 0;
}