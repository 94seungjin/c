#include <stdio.h>

int main() {
    int num1, num2;
    int sequence[10];  // 10개의 항을 저장할 배열

    // 첫 번째와 두 번째 항 입력받기
    scanf("%d %d", &num1, &num2);

    // 배열의 첫 번째와 두 번째 항 초기화
    sequence[0] = num1;
    sequence[1] = num2;

    // 세 번째 항부터 10번째 항까지 계산
    for (int i = 2; i < 10; i++) {
        sequence[i] = (sequence[i - 2] + sequence[i - 1]) % 10;  // 전전항과 전항의 합의 1의 자리 계산
    }

    // 결과 출력
    for (int i = 0; i < 10; i++) {
        printf("%d ", sequence[i]);
    }

    return 0;
}
