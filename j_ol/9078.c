#include <stdio.h>

int main() {
    int array1[3][3];  // ù ��° 3x3 �迭
    int array2[3][3];  // �� ��° 3x3 �迭
    int sum[3][3];     // �� �迭�� ���� ������ 3x3 �迭

    // ù ��° �迭 �Է�
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    // �� ��° �迭 �Է�
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    // �� �迭�� �� ���
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // ��� ���    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
