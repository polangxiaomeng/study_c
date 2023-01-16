#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


#define ROW 3
#define COL 3

//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void Player(char board[ROW][COL], int row, int col);

//电脑下棋
void Computer(char board[ROW][COL], int row, int col);

//判断输赢
char JudgeWin(char board[ROW][COL], int row, int col, char type);


