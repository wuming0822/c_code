#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void reput_board(char board[ROW][COL], int row, int col)//row为行数，col为列数
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)//用两层循环将二维数组所有元素全都变为空格（第一层循环）
	{
		for (j = 0; j < col; j++)//第二层循环
		{
			board[i][j] = ' ';// 用两层循环将二维数组所有元素全都变为空格
		}
	}
}

void bisplay_board(char board[ROW][COL], int row, int col)//打印棋盘，棋盘形状为：  X |   |   
{                                                         //                     ---|---|---  
	int i = 0, j = 0;//创建用于二维数组打印的元素位置以及控制棋盘形状的变量              | O | X
	for (i = 0; i < ROW; i++)                             //                     ---|---|---
	{                                                     //                        |   |
		for (j = 0; j < col; j++)//用于打印包含数组元素的行数如（ * |   |   ）    玩家棋子为 X   电脑棋子为 O
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)//在列数达到元素最后一个值的时候停止打印 |  使表格对称
				printf("|");
		}
		printf("\n");
		if (i < row - 1)//在行数为最后一行时，停止打印分隔行使上下对称
		{
			for (j = 0; j < col; j++)//打印   ---|---|---   分隔行   
			{
				printf("---");
				if (j < col - 1)//在分隔行循环列数到最后一列时，停止打印 | 使表格左右对称
					printf("|");
			}
			printf("\n");
		}
	}
}

void HumanMove(char board[ROW][COL], int row, int col)//玩家输入
{
	printf("玩家输入坐标->");
	int x = 0, y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if ((x > 0 && x <= col) && (y > 0 && y <= row))//判断是否为坐标范围
		{
			if (board[x - 1][y - 1] == ' ')//判断此位置是否被占用
			{
				board[x - 1][y - 1] = 'X';//将数组中此元素标记为玩家输入
				break;
			}
			else
			{
				printf("该位置已被占用，请重新输入：");
				continue;
			}
		}
		else
		{
			printf("输入错误请重新输入：");
			continue;
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)//电脑进行随机输入
{
	printf("电脑输入-");
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
		x = rand() % col;//进行随机数X y的创建
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

int judage_Winer(char board[ROW][COL], int row, int col)//进行输赢的判断
{
	int Judage = 0;
	int i = 0, j = 0;
	for (i = 0 ; i < row ; i++)//横轴三子棋判断  1
	{
		Judage = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][0] == board[i][j] && board[i][0] != ' ' && board[i][j] != ' ')
			{
				Judage++; //判断赢家变量初始化
			}
			if (Judage == col)
			{
				switch (i)//进行获胜方输出
				{
				case 0:
					if(board[i][0] == 'X')
					{
						printf("玩家获胜\n");
					}
					else
					{
						printf("电脑获胜\n");
					}
					break;
				case 1:
					if (board[i][0] == 'X')
					{
						printf("玩家获胜\n");
					}
					else
					{
						printf("电脑获胜\n");
					}
					break;
				case 2:
					if (board[i][0] == 'X')
					{
						printf("玩家获胜\n");
					}
					else
					{
						printf("电脑获胜\n");
					}
					break;
				}
				return 1;
			}
		}
	}
	for (j = 0; j < col; j++)//纵轴三子棋的判断 2
	{
		Judage = 0;//判断赢家变量初始化  
		for (i = 0 ; i < row ; i++)
		{
			if (board[0][j] == board[i][j] && board[0][j] != ' ' && board[i][j] != ' ')
			{
				Judage++;
			}
			if (Judage == row)
			{
				switch (j)//进行获胜方输出
				{
				case 0:
					if (board[0][j] == 'X')
					{
						printf("玩家获胜\n");
					}
					else
					{
						printf("电脑获胜\n");
					}
					break;
				case 1:
					if (board[0][j] == 'X')
					{
						printf("玩家获胜\n");
					}
					else
					{
						printf("电脑获胜\n");
					}
					break;
				case 2:
					if (board[0][j] == 'X')
					{
						printf("玩家获胜\n");
					}
					else
					{
						printf("电脑获胜\n");
					}
					break;
				}
				return 2;
			}
		}
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[0][0] && board[0][0] != ' ') // 交叉轴三子棋判断 3
	{
		if (board[1][1] == 'X')
		{
			printf("玩家获胜\n");
		}
		else
		{
			printf("电脑获胜\n");
		}
		return 3;
	}
	if (board[0][2] == board[1][1] && board[2][0] == board[0][2] && board[0][2] != ' ')
	{
		if (board[1][1] == 'X')
		{
			printf("玩家获胜\n");
		}
		else
		{
			printf("电脑获胜\n");
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
		return 5;//如果所有的空位都被占满，则返回数值5
	}
	*/
}


void Speak_Winer(char board[ROW][COL], int row, int col)//进行胜利者播报，平局播报，否则接着进行比赛
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

int back_Winer(char board[ROW][ROW])//统一对于输出结果判断
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


void board_teacher()//教程
{
	printf("教程\n");
	printf("^                    \n");
	printf("|                    \n");
	printf("1  1 1   1 2   1 3   \n");
	printf("|                    \n");
	printf("2  2 1   2 2   2 3   \n");
	printf("|                    \n");
	printf("3  3 1   3 2   3 3   \n");
	printf("|                    \n");
	printf("0----1----2----3---->\n");
	printf(" 输入相应格式就可以下棋  ");

}