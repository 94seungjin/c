#include <stdio.h>

int main() {
    int rows = 5;          // 행의 수
    int cols = 5;          // 열의 수
    int arr[5][5] = { 0 };   // 5x5 배열 선언 및 0으로 초기화

    // 1행의 1열, 3열, 5열을 1로 초기화
    arr[0][0] = 1;
    arr[0][2] = 1;
    arr[0][4] = 1;

    // 2행부터 배열 채우기
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // 첫 번째 열과 마지막 열은 예외 처리
            if (j == 0) {
                arr[i][j] = arr[i - 1][j + 1];
            }
            else if (j == cols - 1) {
                arr[i][j] = arr[i - 1][j - 1];
            }
            else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
            }
        }
    }

    // 배열 출력
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
