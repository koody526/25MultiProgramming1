#include <stdio.h>
#include <conio.h>

int SS(int mp, int range) {
    if (mp >= 50) {
        if (range > 10) {
            printf("���ΰ� : �ʴ� ������ ȹ���߳�?\n");
        }
    }
    return 0;
}

int main() {
    char ch;
    int mp = 0;
    int range = 0;
    int count;

    // mp �Է�
    printf("mp ���� �Է��ϼ��� (�ִ� 3�ڸ� ����): ");
    count = 0;
    while (count < 3) {
        ch = _getch();
        if (ch != 13) { // Enter�� �ƴϸ� ó��
            printf("%c", ch);
            mp = mp * 10 + (ch - '0');
            count = count + 1;
        }
    }

    printf("\n");

    // range �Է�
    printf("range ���� �Է��ϼ��� (�ִ� 3�ڸ� ����): ");
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








