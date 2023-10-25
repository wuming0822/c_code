#define _CRT_SECURE_NO_WARNINGS 1//三子棋  玩家棋子为 *   电脑棋子为 #
#include "game.h"

int game2()
{
	char board[ROW][COL] = { 0 };
	system("cls");//清空屏幕
	reput_board(board, ROW, COL);//将数组里的元素进行初始化（元素改为空格）
	while (1)
	{
		if (rand() % 2 == 1)//通过用随机数去判断先手为电脑或者玩家
		{
			while (1)
			{
				bisplay_board(board, ROW, COL);//打印棋盘
				board_teacher();
				HumanMove(board, ROW, COL);//玩家输入
				system("cls");//清空屏幕
				if (back_Winer(board) == 1)//进行胜利者播报，平局播报，否则接着进行比赛
				{
					bisplay_board(board, ROW, COL);
					printf("Win!!");
					return 0;
				}

				bisplay_board(board, ROW, COL);
				board_teacher();

				ComputerMove(board, ROW, COL);//电脑随机输入
				system("cls");//清空屏幕
				if (back_Winer(board) == 1)//进行胜利者播报，平局播报，否则接着进行比赛
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
				ComputerMove(board, ROW, COL);//电脑随机输入
				board_teacher();

				system("cls");
				if (back_Winer(board) == 1)//进行胜利者播报，平局播报，否则接着进行比赛
				{
					bisplay_board(board, ROW, COL);
					printf("Win!!");
					return 0;
				}

				bisplay_board(board, ROW, COL);//打印棋盘
				board_teacher();
				HumanMove(board, ROW, COL);//玩家输入
				system("cls");
				if (back_Winer(board) == 1)//进行胜利者播报，平局播报，否则接着进行比赛
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
	system("cls");//清空屏幕
	reput_board(board,ROW,COL);//将数组里的元素进行初始化（元素改为空格）
	while (1)
	{
		if (rand() % 2 == 1)//通过用随机数去判断先手为电脑或者玩家
		{
			while (1)
			{
				bisplay_board(board, ROW, COL);//打印棋盘
				HumanMove(board,ROW, COL);//玩家输入
				system("cls");//清空屏幕
				if (back_Winer(board) == 1)//进行胜利者播报，平局播报，否则接着进行比赛
				{				
					bisplay_board(board, ROW, COL);
					
					return 0;
				}
				
				bisplay_board(board, ROW, COL);
				ComputerMove(board, ROW, COL);//电脑随机输入
				system("cls");//清空屏幕
				if (back_Winer(board) == 1)//进行胜利者播报，平局播报，否则接着进行比赛
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
				ComputerMove(board, ROW, COL);//电脑随机输入
				system("cls");
				if (back_Winer(board) == 1)//进行胜利者播报，平局播报，否则接着进行比赛
				{
					bisplay_board(board, ROW, COL);
				
					return 0;
				}
				
				bisplay_board(board, ROW, COL);//打印棋盘
				HumanMove(board, ROW, COL);//玩家输入
				system("cls");
				if (back_Winer(board) == 1)//进行胜利者播报，平局播报，否则接着进行比赛
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
	int inPut = 0;//创建整形变量用于判断玩家的选项选择
	printf("**********************************************\n");
	printf("*************       三子棋       *************\n");
	printf("**********************************************\n");
	printf("********* 1.游玩 2.教程模式 0.退出   *********\n");
	printf("**********************************************\n");
	printf("请输入选项：");
	do//输入判断如果输入数值不为1或者0，则要求重新判断
	{
		scanf("%d", &inPut);
		switch (inPut)
		{
		case 1:
			game();//调用游戏函数，正式进入游戏
		case 0:
			break;
		case 2:
			game2();
			break;
		default :
			printf("输入错误，请重新输入：");
			continue;//输入错误回到循环起点重新开始
		}
		break;
	} while (1);
	int pro = 0;
	printf("将在10秒后自动退出\n");
	for (pro = 0; pro < 10; pro++)
	{
		Sleep(1000);
		printf(" ");
	}
	return 0;
}