#pragma once
#include <stdio.h>
#include<time.h>
#include<windows.h>
#define ROW 9//���淶Χ_����
#define COL 9//���淶Χ_����
#define ROWS ROW + 2//����లȫ��Χ
#define COLS COL + 2//����లȫ��Χ
#define BOOM 1//�����������


void rePut_Boom(char Boom[ROWS][COLS],int rows,int cols,char set);//��ʼ�����ã��ֱ��Ӧmine�����show����
void show_Boom_demo(char Boom[ROWS][COLS], int rows, int cols);//��ӡ���̡�������
void Set_mine(char Boom[ROWS][COLS], int row, int col);//���׺���
int Juage_MY(char mine[ROWS][COLS], int x, int y);//�ж���Χ8��λ���ж�����
int judage_Win(char mine[ROWS][COLS],int row,int col);//�ж��Ƿ�ʤ��

/////////////////���Ժ���///////////////////////////////////////////////////////////////////////////////
void convinence_show(char show[ROWS][COLS],char mine[ROWS][COLS], int row, int col,int x,int y);//�յ���λ��ֱ������