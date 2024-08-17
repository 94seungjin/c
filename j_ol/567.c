#include <stdio.h>

int main() {
    // 3x5 배열 선언 및 초기화
    int array[3][5] = {
        { 5,  8, 10,  6,  4},
        {11, 20,  1, 13,  2},
        { 7,  9, 14, 22,  3}
    };

    // 배열 출력
    for (int i = 0; i < 3; i++) { // 행 루프
        for (int j = 0; j < 5; j++) { // 열 루프
            printf("%2d", array[i][j]); // 숫자를 2칸으로 오른쪽 정렬
            if (j < 4) {
                printf("   "); // 숫자 사이에 3칸의 공백을 추가
            }
        }
        printf("\n"); // 한 행이 끝나면 개행
    }

    return 0;
}
