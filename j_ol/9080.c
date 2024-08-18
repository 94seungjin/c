#include <stdio.h>

int main() {
    int pascal[5][5]; // �Ľ�Į �ﰢ���� ������ 2���� �迭

    // �Ľ�Į �ﰢ�� ����
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            // ù ��°�� ������ ��ġ�� 1�� �ʱ�ȭ
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            }
            else {
                // �� �� ���� ���Ͽ� ���� ��ġ�� ���� ���
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    // �Ľ�Į �ﰢ�� ���
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
