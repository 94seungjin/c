#include <stdio.h>

int main() {
    char array[3][5];  // 3행 5열의 2차원 문자 배열
    int i, j;

    // 3행 5열 대문자 입력받기
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf(" %c", &array[i][j]);  // 공백을 사용하여 이전 입력의 개행 문자 무시
        }
    }

    // 소문자로 변환하여 출력
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            // 대문자를 소문자로 변환 (대문자 아스키 값에 32를 더해 소문자로 변환)
            printf("%c ", array[i][j] + 32);
        }
        printf("\n");  // 각 행 끝에서 줄 바꿈
    }

    return 0;
}
