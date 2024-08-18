#include<stdio.h>

int main(void) {
    int f_arr[2][3] = { 0, };   // 첫 번째 2x3 배열
    int s_arr[2][3] = { 0, };   // 두 번째 2x3 배열
    int mul_arr[2][3] = { 0, }; // 곱셈 결과를 저장할 2x3 배열
    int i, j;

    // 첫 번째 배열 입력
    printf("first array\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf_s("%d", &f_arr[i][j]);
        }
    }
    // 두 번째 배열 입력
    printf("second array\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf_s("%d", &s_arr[i][j]);
        }
    }
    // 두 배열의 같은 위치의 값을 곱하여 결과 배열에 저장
    printf("Resultant array\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            mul_arr[i][j] = f_arr[i][j] * s_arr[i][j];
            printf("%d ", mul_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
