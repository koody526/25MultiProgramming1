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

    // ������ �ؽ�Ʈ

    puts("\033[31m Start\033[0m\n");



    // �ʷϻ� �ؽ�Ʈ�� ����� ���

    puts("\033[32m\033[43m NEW GAME \033[0m\n");



    // ���� �ؽ�Ʈ�� �Ķ��� �ؽ�Ʈ

    puts("\033[1m\033[34m GAMEOVER \033[0m\n");



    return 0;

}