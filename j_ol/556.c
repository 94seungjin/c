#include <stdio.h>

int main()
{
    // 정수 10개를 저장할 수 있는 배열 선언
    int number[10];

    // 1부터 10까지 배열에 대입
    for (int i = 0; i < 10; i++) {
        number[i] = i + 1;
    }

    // 배열의 값을 차례대로 출력
    for (int i = 0; i < 10; i++) {
        printf("%d ", number[i]);
    }
    printf("\n"); // 줄바꿈

    return 0;
}
