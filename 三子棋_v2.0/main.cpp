#define _CRT_SECURE_NO_WARNINGS 1//������  �������Ϊ *   ��������Ϊ #
#include "game.h"

int game2()
{
	char board[ROW][COL] = { 0 };
	system("cls");//�����Ļ
	reput_board(board, ROW, COL);//���������Ԫ�ؽ��г�ʼ����Ԫ�ظ�Ϊ�ո�
	while (1)
	{
		if (rand() % 2 == 1)//ͨ���������ȥ�ж�����Ϊ���Ի������
		{
			while (1)
			{
				bisplay_board(board, ROW, COL);//��ӡ����
				board_teacher();
				HumanMove(board, ROW, COL);//�������
				system("cls");//�����Ļ
				if (back_Winer(board) == 1)//����ʤ���߲�����ƽ�ֲ�����������Ž��б���
				{
					bisplay_board(board, ROW, COL);
					printf("Win!!");
					return 0;
				}

				bisplay_board(board, ROW, COL);
				board_teacher();

				ComputerMove(board, ROW, COL);//�����������
				system("cls");//�����Ļ
				if (back_Winer(board) == 1)//����ʤ���߲�����ƽ�ֲ�����������Ž��б���
				{
					bisplay_board(board, ROW, COL);
					printf("Win!!");
					return 0;
				}

			}
		}
		else
		{
			while (1)
			{
				bisplay_board(board, ROW, COL);
				ComputerMove(board, ROW, COL);//�����������
				board_teacher();

				system("cls");
				if (back_Winer(board) == 1)//����ʤ���߲�����ƽ�ֲ�����������Ž��б���
				{
					bisplay_board(board, ROW, COL);
					printf("Win!!");
					return 0;
				}

				bisplay_board(board, ROW, COL);//��ӡ����
				board_teacher();
				HumanMove(board, ROW, COL);//�������
				system("cls");
				if (back_Winer(board) == 1)//����ʤ���߲�����ƽ�ֲ�����������Ž��б���
				{
					bisplay_board(board, ROW, COL);
					printf("Win!!");
					return 0;
				}

			}
		}
	}

}

int game()
{
	char board[ROW][COL] = {0};
	system("cls");//�����Ļ
	reput_board(board,ROW,COL);//���������Ԫ�ؽ��г�ʼ����Ԫ�ظ�Ϊ�ո�
	while (1)
	{
		if (rand() % 2 == 1)//ͨ���������ȥ�ж�����Ϊ���Ի������
		{
			while (1)
			{
				bisplay_board(board, ROW, COL);//��ӡ����
				HumanMove(board,ROW, COL);//�������
				system("cls");//�����Ļ
				if (back_Winer(board) == 1)//����ʤ���߲�����ƽ�ֲ�����������Ž��б���
				{				
					bisplay_board(board, ROW, COL);
					
					return 0;
				}
				
				bisplay_board(board, ROW, COL);
				ComputerMove(board, ROW, COL);//�����������
				system("cls");//�����Ļ
				if (back_Winer(board) == 1)//����ʤ���߲�����ƽ�ֲ�����������Ž��б���
				{
					bisplay_board(board, ROW, COL);
					
					return 0;
				}
				
			}
		}
		else
		{
			while (1)
			{
				bisplay_board(board, ROW, COL);
				ComputerMove(board, ROW, COL);//�����������
				system("cls");
				if (back_Winer(board) == 1)//����ʤ���߲�����ƽ�ֲ�����������Ž��б���
				{
					bisplay_board(board, ROW, COL);
				
					return 0;
				}
				
				bisplay_board(board, ROW, COL);//��ӡ����
				HumanMove(board, ROW, COL);//�������
				system("cls");
				if (back_Winer(board) == 1)//����ʤ���߲�����ƽ�ֲ�����������Ž��б���
				{
					bisplay_board(board, ROW, COL);
					
					return 0;
				}
				
			}
		}
	}
	
}

int main()
{
	srand(unsigned(time(NULL)));
	int inPut = 0;//�������α��������ж���ҵ�ѡ��ѡ��
	printf("**********************************************\n");
	printf("*************       ������       *************\n");
	printf("**********************************************\n");
	printf("********* 1.���� 2.�̳�ģʽ 0.�˳�   *********\n");
	printf("**********************************************\n");
	printf("������ѡ�");
	do//�����ж����������ֵ��Ϊ1����0����Ҫ�������ж�
	{
		scanf("%d", &inPut);
		switch (inPut)
		{
		case 1:
			game();//������Ϸ��������ʽ������Ϸ
		case 0:
			break;
		case 2:
			game2();
			break;
		default :
			printf("����������������룺");
			continue;//�������ص�ѭ��������¿�ʼ
		}
		break;
	} while (1);
	int pro = 0;
	printf("����10����Զ��˳�\n");
	for (pro = 0; pro < 10; pro++)
	{
		Sleep(1000);
		printf(" ");
	}
	return 0;
}