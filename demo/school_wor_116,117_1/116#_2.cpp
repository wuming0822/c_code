#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    printf("�������ܹ���������ε�������ֵ\n");
    again:
    scanf("%d %d %d", &a, &b, &c);
    if (a + c > b && a + b > c && c + b > a)//�Ƿ�Ϊ�����ε��ж�
    {
        if (a * a + b * b == c * c)
        {
            printf("��������Ϊֱ��������");
        }
        else if (a == b && a== c)
        {
            printf("��������Ϊ�ȱ�������");
        }
        else if ((a == b || c == a || b == c) && (a != b || a != c || b != c))
        {
            printf("��������Ϊ����������");
        }
        else
            printf("��������Ϊ��ͨ������");
    }
    else
    {
        printf("���ܹ��������Σ��������ܹ���������ε�����������ֵ\n");
        goto again;//�������Ĳ��ܹ��������Σ��ص�������ֵ�Ľ׶�
    }
    return 0;
}