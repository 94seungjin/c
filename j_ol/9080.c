#include <stdio.h>

int main() {
    int pascal[5][5]; // 파스칼 삼각형을 저장할 2차원 배열

    // 파스칼 삼각형 생성
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            // 첫 번째와 마지막 위치는 1로 초기화
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            }
            else {
                // 위 두 값을 더하여 현재 위치의 값을 계산
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    // 파스칼 삼각형 출력
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
