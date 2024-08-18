#include <stdio.h>

int main() {
    int rows = 5, cols = 5; // 행과 열의 수를 정의
    int array[5][5]; // 5x5 배열 선언

    // 배열 초기화 및 값 계산
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || j == 0) {
                array[i][j] = 1; // 첫 번째 행과 첫 번째 열은 모두 1로 설정
            }
            else {
                array[i][j] = array[i - 1][j] + array[i][j - 1]; // 바로 위와 바로 왼쪽 값을 더함
            }
        }
    }

    // 배열 출력
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]); // 계산된 배열의 값을 출력
        }
        printf("\n"); // 한 행이 끝나면 개행
    }

    return 0;
}
