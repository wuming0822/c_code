#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//�ж��Ƿ�Ϊ����
int main()
{
    printf("�������������֣�");
    int inPut = 0;
    scanf("%d", &inPut);
    if (inPut % 2 == 0)
    {
        printf("��Ϊ����");
    }
    else
    {
       printf("Ϊ����");
    }
    
    return 0;
}