#include <stdio.h>

// 1. PassOrFail �Լ� ����
int PassOrFail(int score) {
    if (score >= 50) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int result;

    // 2. ������ ���� ������ ���� �Է�
    int myScore = 80;  // ����: ���� ���� 80��

    result = PassOrFail(myScore);  // �Լ� ȣ��

    if (result == 1) {
        printf("����� �����ϴ�!\n");
    }
    else {
        printf("����� �ֽ��ϴ�\n");
    }

    return 0;
}
