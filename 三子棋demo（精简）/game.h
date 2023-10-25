#pragma once
const int ROW = 3;//行数
const int COL = 3;//列数
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
void reput_board(char board[ROW][COL],int row,int col);//将数组里的元素进行初始化（元素改为空格）

void bisplay_board(char board[ROW][COL],int row ,int col);//打印棋盘
				
void HumanMove(char board[ROW][COL],int row,int col);//玩家输入

void ComputerMove(char board[ROW][COL], int row,int col);//电脑进行随机输入

int judage_Winer(char board[ROW][COL], int row, int col);//进行输赢的判断

void Speak_Winer(char board[ROW][COL], int row, int col);//进行胜利者播报，平局播报，否则接着进行比赛

int back_Winer(char board[ROW][COL]);//统一对于输出结果判断

void board_teacher();



