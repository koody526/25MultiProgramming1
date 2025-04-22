#include <stdio.h>

// 1. PassOrFail 함수 정의
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

    // 2. 본인의 예상 점수를 여기 입력
    int myScore = 80;  // 예시: 예상 점수 80점

    result = PassOrFail(myScore);  // 함수 호출

    if (result == 1) {
        printf("재시험 없습니다!\n");
    }
    else {
        printf("재시험 있습니다\n");
    }

    return 0;
}
