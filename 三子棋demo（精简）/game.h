#pragma once
const int ROW = 3;//����
const int COL = 3;//����
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
void reput_board(char board[ROW][COL],int row,int col);//���������Ԫ�ؽ��г�ʼ����Ԫ�ظ�Ϊ�ո�

void bisplay_board(char board[ROW][COL],int row ,int col);//��ӡ����
				
void HumanMove(char board[ROW][COL],int row,int col);//�������

void ComputerMove(char board[ROW][COL], int row,int col);//���Խ����������

int judage_Winer(char board[ROW][COL], int row, int col);//������Ӯ���ж�

void Speak_Winer(char board[ROW][COL], int row, int col);//����ʤ���߲�����ƽ�ֲ�����������Ž��б���

int back_Winer(char board[ROW][COL]);//ͳһ�����������ж�

void board_teacher();



