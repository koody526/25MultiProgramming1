#include <stdio.h>
#include <conio.h>

int SS(int mp, int range) {
    if (mp >= 50) {
        if (range > 10) {
            printf("주인공 : 너는 점수를 획득했나?\n");
        }
    }
    return 0;
}

int main() {
    char ch;
    int mp = 0;
    int range = 0;
    int count;

    // mp 입력
    printf("mp 값을 입력하세요 (최대 3자리 숫자): ");
    count = 0;
    while (count < 3) {
        ch = _getch();
        if (ch != 13) { // Enter가 아니면 처리
            printf("%c", ch);
            mp = mp * 10 + (ch - '0');
            count = count + 1;
        }
    }

    printf("\n");

    // range 입력
    printf("range 값을 입력하세요 (최대 3자리 숫자): ");
    count = 0;
    while (count < 3) {
        ch = _getch();
        if (ch != 13) {
            printf("%c", ch);
            range = range * 10 + (ch - '0');
            count = count + 1;
        }
    }

    printf("\n");
    SS(mp, range);

    return 0;
}








