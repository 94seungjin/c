#include <stdio.h>

int main() {
    int array1[3][3];  // 첫 번째 3x3 배열
    int array2[3][3];  // 두 번째 3x3 배열
    int sum[3][3];     // 두 배열의 합을 저장할 3x3 배열

    // 첫 번째 배열 입력
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    // 두 번째 배열 입력
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    // 두 배열의 합 계산
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // 결과 출력    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
