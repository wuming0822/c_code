#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//char* my_strcpy(char*e1 , char*e2)//����ģ��strcpy����
//{
//	assert(e1 && e2);
//	char* tmp = e1;
//	while (*e1++ = *e2++)
//	{
//		;
//	}
//	return tmp;
//	/*while(1)
//	{
//		if (*e2 == 0)
//		{
//			*e1 = *e2;
//			break;
//		}
//		*e1 = *e2;
//		e2++;
//		e1++;
//	}*/
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20];
//	my_strcpy(arr2,arr1);
//	printf("%s",arr2);
//	return 0;
//}

//strcat�ַ���׷�Ӻ���
//char* my_strcat(char *dest , const char* sre)
//{
//	assert(dest && sre);
//	char* tmp = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *sre++)
//		;
//	return dest;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	my_strcat(arr1,"world");
//	printf("%s",arr1);
//	return 0;
//}

//strcmp�ַ����ȽϺ���
int my_strcmp(const char* e1,const char* e2)//ģ���ַ����ȽϺ���
{
	assert(e1 && e2);
	while (*e1 == *e2)
	{
		if (*e1 == '\0')
			return 0;
		e1++;
		e2++;
	}
	return (*e1 - *e2);//�����ߵĴ����ұߵľͻ᷵�ش���0������
}
int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abc";
	if (my_strcmp(arr1,arr2) == 0)
	{
		printf("==");
	}
	else if (my_strcmp(arr1, arr2) > 0)
	{
		printf(">");
	}
	else if (my_strcmp(arr1,arr2) < 0)
	{
		printf("<");
	}
	return 0;
}