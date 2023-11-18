#include <stdio.h>
//#include <stdlib.h>
//冒泡排序算法
//快速排序函数qrsot
void bobos_list (void* base , int sz , int wide , int(*cmp)(const void* e1 , const void* e2))//模仿qsrot函数的基于冒泡函数算法达到相同结果
{
    int i = 0 ;
    int n = 0 ;
    for ( i = 0 ; i < sz - 1 ; i++)//冒泡函数相同算法
    {
        int count = 0 ;
        for(n = 0 ; n < sz - 1 - i ; n++)
        {   
            if(cmp((char*)(base + (i * wide)),(char*)(base + (i + 1) * wide)) > 0)
            {
                SWap((char*)base + (i * wide),(char*)(base + (i + 1) * wide),wide);
                count = 1;
            }
        }
    }
}
void SWap (char* e1 , char* e2,int wide)//元素交换函数
{
    int i = 0 ;
    for(i = 0 ; i < wide ; i++)
    {
        char tmp ;
        tmp = *e1;
        *e1 = *e2;
        *e2 = *e1; 
        e1++;
        e2++;
    }
}
int compareNum (int* e1 , int* e2)
{
    return (*e1 - *e2);//如果e1大于e2，就返回数值大于0的数值，如果相同就返回0，如果e1小于e2，就返回负数
}
int main()
{
    int i = 0, n = 0 ;
    int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度
    bobos_list(arr,sz,sizeof(arr[0]),compareNum);//1.作为基准的开头 2.元素长度 3.一个元素所占内存的宽度 4.自己所创建的比较函数
    return 0;
}