#pragma once


#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE 10


//��ʼ������
void InitMine(char board[ROWS][COLS], int rows, int cols, char type);
//��ӡ��ͼ
void PrintBoard(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char mine[ROWS][COLS], int row, int col);
//�������
void CleanMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);