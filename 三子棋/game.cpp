#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void reput_board(char board[ROW][COL], int row, int col)//rowΪ������colΪ����
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)//������ѭ������ά��������Ԫ��ȫ����Ϊ�ո񣨵�һ��ѭ����
	{
		for (j = 0; j < col; j++)//�ڶ���ѭ��
		{
			board[i][j] = ' ';// ������ѭ������ά��������Ԫ��ȫ����Ϊ�ո�
		}
	}
}

void bisplay_board(char board[ROW][COL], int row, int col)//��ӡ���̣�������״Ϊ��  X |   |   
{                                                         //                     ---|---|---  
	int i = 0, j = 0;//�������ڶ�ά�����ӡ��Ԫ��λ���Լ�����������״�ı���              | O | X
	for (i = 0; i < ROW; i++)                             //                     ---|---|---
	{                                                     //                        |   |
		for (j = 0; j < col; j++)//���ڴ�ӡ��������Ԫ�ص������磨 * |   |   ��    �������Ϊ X   ��������Ϊ O
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)//�������ﵽԪ�����һ��ֵ��ʱ��ֹͣ��ӡ |  ʹ���Գ�
				printf("|");
		}
		printf("\n");
		if (i < row - 1)//������Ϊ���һ��ʱ��ֹͣ��ӡ�ָ���ʹ���¶Գ�
		{
			for (j = 0; j < col; j++)//��ӡ   ---|---|---   �ָ���   
			{
				printf("---");
				if (j < col - 1)//�ڷָ���ѭ�����������һ��ʱ��ֹͣ��ӡ | ʹ������ҶԳ�
					printf("|");
			}
			printf("\n");
		}
	}
}

void HumanMove(char board[ROW][COL], int row, int col)//�������
{
	printf("�����������->");
	int x = 0, y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if ((x > 0 && x <= col) && (y > 0 && y <= row))//�ж��Ƿ�Ϊ���귶Χ
		{
			if (board[x - 1][y - 1] == ' ')//�жϴ�λ���Ƿ�ռ��
			{
				board[x - 1][y - 1] = 'X';//�������д�Ԫ�ر��Ϊ�������
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ�ã����������룺");
				continue;
			}
		}
		else
		{
			printf("����������������룺");
			continue;
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)//���Խ����������
{
	printf("��������-");
	int x = 0, y = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("-");
		Sleep(200);
	}
	printf("->");
	printf("\n");
	while (1)
	{
		x = rand() % col;//���������X y�Ĵ���
		y = rand() % row;
		if (board[x][y])
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = 'O';
				break;
			}
			else
				continue;
		}
	}
}

int judage_Winer(char board[ROW][COL], int row, int col)//������Ӯ���ж�
{
	int Judage = 0;
	int i = 0, j = 0;
	for (i = 0 ; i < row ; i++)//�����������ж�  1
	{
		Judage = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][0] == board[i][j] && board[i][0] != ' ' && board[i][j] != ' ')
			{
				Judage++; //�ж�Ӯ�ұ�����ʼ��
			}
			if (Judage == col)
			{
				switch (i)//���л�ʤ�����
				{
				case 0:
					if(board[i][0] == 'X')
					{
						printf("��һ�ʤ\n");
					}
					else
					{
						printf("���Ի�ʤ\n");
					}
					break;
				case 1:
					if (board[i][0] == 'X')
					{
						printf("��һ�ʤ\n");
					}
					else
					{
						printf("���Ի�ʤ\n");
					}
					break;
				case 2:
					if (board[i][0] == 'X')
					{
						printf("��һ�ʤ\n");
					}
					else
					{
						printf("���Ի�ʤ\n");
					}
					break;
				}
				return 1;
			}
		}
	}
	for (j = 0; j < col; j++)//������������ж� 2
	{
		Judage = 0;//�ж�Ӯ�ұ�����ʼ��  
		for (i = 0 ; i < row ; i++)
		{
			if (board[0][j] == board[i][j] && board[0][j] != ' ' && board[i][j] != ' ')
			{
				Judage++;
			}
			if (Judage == row)
			{
				switch (j)//���л�ʤ�����
				{
				case 0:
					if (board[0][j] == 'X')
					{
						printf("��һ�ʤ\n");
					}
					else
					{
						printf("���Ի�ʤ\n");
					}
					break;
				case 1:
					if (board[0][j] == 'X')
					{
						printf("��һ�ʤ\n");
					}
					else
					{
						printf("���Ի�ʤ\n");
					}
					break;
				case 2:
					if (board[0][j] == 'X')
					{
						printf("��һ�ʤ\n");
					}
					else
					{
						printf("���Ի�ʤ\n");
					}
					break;
				}
				return 2;
			}
		}
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[0][0] && board[0][0] != ' ') // �������������ж� 3
	{
		if (board[1][1] == 'X')
		{
			printf("��һ�ʤ\n");
		}
		else
		{
			printf("���Ի�ʤ\n");
		}
		return 3;
	}
	if (board[0][2] == board[1][1] && board[2][0] == board[0][2] && board[0][2] != ' ')
	{
		if (board[1][1] == 'X')
		{
			printf("��һ�ʤ\n");
		}
		else
		{
			printf("���Ի�ʤ\n");
		}
		return 3;
	}
	/*int X = 0, Y = 0, Jud = 0;
	for (X = 0 ; X < ROW ; X++)
	{
		for (Y = 0 ; Y < COL ; Y++)
		{
			if (board[X][Y] != ' ')
			{
				Jud++;
			}
		}
	}
	if (Jud == 9)
	{
		return 5;//������еĿ�λ����ռ�����򷵻���ֵ5
	}
	*/
}


void Speak_Winer(char board[ROW][COL], int row, int col)//����ʤ���߲�����ƽ�ֲ�����������Ž��б���
{
	if (judage_Winer(board, row, col) == 1)
	{
		printf("Win");
	}
}

int back_Winer(int win,char board[ROW][COL],int row,int col)
{
	if (judage_Winer(board,row,col) == 1)
	{
		return 1;
	}
}

int back_Winer(char board[ROW][ROW])//ͳһ�����������ж�
{
	switch (judage_Winer(board,ROW,COL))
	{
	case 1:
	case 2:
	case 3:
		return 1;
	default:
		return 0;
	}
}


void board_teacher()//�̳�
{
	printf("�̳�\n");
	printf("^                    \n");
	printf("|                    \n");
	printf("1  1 1   1 2   1 3   \n");
	printf("|                    \n");
	printf("2  2 1   2 2   2 3   \n");
	printf("|                    \n");
	printf("3  3 1   3 2   3 3   \n");
	printf("|                    \n");
	printf("0----1----2----3---->\n");
	printf(" ������Ӧ��ʽ�Ϳ�������  ");

}