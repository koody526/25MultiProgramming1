#include <stdio.h>
#include <conio.h>
#include <Windows.h>

// 커서 이동 함수
void gotoxy(int x, int y) {
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    char ch;
    int count = 0;

    // 케이크 출력
    printf("         \033[30;43mo\033[0m     \033[30;43mo\033[0m       \n");
    printf("        \033[40;34m|\033[0m     \033[40;32m|\033[0m       \n");

    printf("    \033[40;37m_________________\033[0m  \n");
    printf("    \033[40;37m|\033[45;97mVVVVVVVVVVVVVVV\033[40;37m|\033[0m\n");
    printf("    \033[40;37m|\033[47;30m               \033[40;37m|\033[0m \n");
    printf("    \033[40;37m_________________\033[0m \n");

    printf("  \033[40;37m____________________\033[0m\n");
    printf("  \033[40;37m|\033[45;97mVVVVVVVVVVVVVVVVVV\033[40;37m|\033[0m \n");
    printf("  \033[40;37m|\033[47;30m                  \033[40;37m|\033[0m \n");
    printf("  \033[40;37m____________________\033[0m\n");

    // H 키 입력 2회 처리
    while (count < 2) {
        ch = _getch();
        if (ch == 'H' || ch == 'h') {
            if (count == 0) {
                gotoxy(10, 5); // 윗단 중앙 - 정확히 가운데로 조정
                printf("\033[47;33mHappy\033[0m");
            }
            else if (count == 1) {
                gotoxy(8, 8); // 아랫단 중앙도 조금 조정
                printf("\033[47;33mBirthday\033[0m");
            }
            count = count + 1;
        }
    }

    return 0;
}

