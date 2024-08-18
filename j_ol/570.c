#include <stdio.h>

int main() {
    int rows = 5, cols = 5; // ��� ���� ���� ����
    int array[5][5]; // 5x5 �迭 ����

    // �迭 �ʱ�ȭ �� �� ���
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || j == 0) {
                array[i][j] = 1; // ù ��° ��� ù ��° ���� ��� 1�� ����
            }
            else {
                array[i][j] = array[i - 1][j] + array[i][j - 1]; // �ٷ� ���� �ٷ� ���� ���� ����
            }
        }
    }

    // �迭 ���
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]); // ���� �迭�� ���� ���
        }
        printf("\n"); // �� ���� ������ ����
    }

    return 0;
}
