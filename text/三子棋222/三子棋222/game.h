#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void Initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playboard(char board[ROW][COL], int row, int col);
void computerboard(char board[ROW][COL], int row, int col);

//四种游戏状态
//玩家赢--‘*’
//电脑赢--‘#’
//平局--‘Q’
//继续--‘C’
char iswin(char board[ROW][COL], int row, int col);