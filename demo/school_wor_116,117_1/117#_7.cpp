#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int judge_RunYear (int year)//�ж��Ƿ�Ϊ���꣬�������򷵻� 1 �����򷵻� 0
{
	if (year % 4 == 0 || year % 100 == 0)
	{
		return 1;
	}
	return 0;
}
int Num_year(int year,int M)//�����ָ�����ʱ��Ӧ�·ݵ�����
{
	int month = 0;
	switch (M)//ͨ���·ݵ���������switch��֧���ֳ�3�࣬31����·ݣ�30����·ݣ��������ֵ�2��
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		month = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		month = 30;
		break;
	case 2://����·�2�£�����������жϺ��������Ϊ�������29�죬�����Ϊ�������28��
		month = (judge_RunYear(year)) ? 29 : 28;//��Ŀ������������������29�죬�����������28��
		break;
	default:
		return -1;
	}
	return month;
}
int main()
{
	int year = 0;
	int M = 0;
	printf("�������� �£�");
	again:
	scanf("%d %d",&year ,&M);
	if (M > 0 && M < 13)//����·��Ƿ񳬳���Χ
	{
		printf("��������Ϊ%d��", Num_year(year,M));
	}
	else
	{
		printf("�·���ֵ������Χ�����������룺");
		goto again;
	}
	return 0;
}