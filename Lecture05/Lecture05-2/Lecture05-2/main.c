#include <stdio.h>
#include <Windows.h>


void gotoXY(int x, int y)
{

    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}
int main() {
    gotoXY(1, 5);

    // 빨간색 텍스트

    puts("\033[31m Start\033[0m\n");



    // 초록색 텍스트와 노란색 배경

    puts("\033[32m\033[43m NEW GAME \033[0m\n");



    // 굵은 텍스트와 파란색 텍스트

    puts("\033[1m\033[34m GAMEOVER \033[0m\n");



    return 0;

}