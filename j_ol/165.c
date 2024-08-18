#include <stdio.h>

int main() {
    int rows = 5;          // ���� ��
    int cols = 5;          // ���� ��
    int arr[5][5] = { 0 };   // 5x5 �迭 ���� �� 0���� �ʱ�ȭ

    // 1���� 1��, 3��, 5���� 1�� �ʱ�ȭ
    arr[0][0] = 1;
    arr[0][2] = 1;
    arr[0][4] = 1;

    // 2����� �迭 ä���
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // ù ��° ���� ������ ���� ���� ó��
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

    // �迭 ���
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
