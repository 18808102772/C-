#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9

#define easy_count 10
#define ROWS ROW+2
#define COLS COL+2
void initboard(char board[ROWS][COLS], int rows, int cols, char set);
void displayboard(char board[ROW][COL], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col);