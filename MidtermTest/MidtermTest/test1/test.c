#include <stdio.h>

int main() {
    // ��� �� ���
    printf("                       .       .\n");
    printf("         /\\          .     .      /\\     /\\\n");
    printf("        /  \\               .     /  \\   /  \\\n");
    printf("   /\\  /    \\    /\\     /\\      /    \\_/    \\\n");

    // ���� (������)
    printf("\033[41;97m      /\\                         /\\          \033[0m\n");
    printf("\033[41;97m     /  \\_______________________/  \\         \033[0m\n");
    printf("\033[41;97m    /                             \\        \033[0m\n");

    // ���� + ����
    printf("\033[47;30m                 ()               \033[0m\n");
    printf("\033[47;30m                 ( )              \033[0m\n");
    printf("\033[47;30m                 ()               \033[0m\n");

    // ��ü�� â��
    printf("\033[43;30m   |  |  |  |  |  |  |  |  |  |  |  |  |  |\033[0m\n");
    printf("\033[43;30m   |                              |\033[0m\033[44;97m [][ ] \033[0m\033[43;30m|\033[0m\n");
    printf("\033[43;30m   |  |  |  |  |  |  |  |  |  |  |  |  |  |\033[0m\n");

    // �� (���)
    printf("\033[42;30m  ________________________________________\033[0m\n");

    return 0;
}
