#define _CRT_SECURE_NO_WARNINGS 1//ɨ����Ϸ
#include "game.h"
void game()//ʵ��ɨ�׵���Ϸ���벿��
{
	system("cls");
	int cols = 0, rows = 0, row = 0, col = 0;
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	//��ʼ�����������չʾ����show
	rePut_Boom(mine, ROWS, COLS,'0');
	rePut_Boom(show, ROWS, COLS,'*');
	//���׺���
	Set_mine(mine,ROW,COL);
	//show_Boom_demo(mine, ROWS, COLS);//����
	//��ӡ����
	show_Boom_demo(show, ROWS, COLS);
	int x = 0, y = 0;
	printf("�������������꣺");
	while (1)
	{
		scanf("%d%d",&x,&y);
		if (x >= 1 && x <= ROW + 1 && y >= 1 && y <= COL + 1)
		{
			if (mine[x][y] == '1')
			{
				printf("����ʧ��\n");
				show_Boom_demo(mine, ROWS, COLS);//��ӡ����
				break;
			}
			else
			{
				int todo = 0;
				todo = Juage_MY(mine, x, y);
////////���Խ׶�//////convinence_show(show, mine, ROW, COL,x,y);//�յ���λ��ֱ������
				show[x][y] = '0' + todo;
				show_Boom_demo(show, ROWS, COLS);
				if (judage_Win(show,ROW,COL) == ROW*COL - BOOM)
				{

					printf("�ɹ�����\n");
					break;
				}
				printf("�������������꣺");
			}
		}
		else
		{
			printf("����������������룺");
			continue;
		}
	}
	
}	
void menu()//�˵�ҳ��
{
	printf("*****************************************\n");
	printf("***************ɨ����Ϸ******************\n");
	printf("*****************************************\n");
	printf("*********  1.play   0.exit  *************\n");
	printf("*****************************************\n");

}
int main()
{
	srand((unsigned int ) time(NULL));
	int inPut = 0;
	do 
	{
		menu();
		printf("������ѡ��:");
		scanf("%d",&inPut);
		switch (inPut)
		{
		case 1:
			game();//������Ϸ������
			break;
		case 0:
			break;
		default :
			printf("����������������룺");
			continue;
		}
	} while (inPut);
	return 0;
}