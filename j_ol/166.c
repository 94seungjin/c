#include<stdio.h>

int main(void) {
    int f_arr[2][3] = { 0, };   // ù ��° 2x3 �迭
    int s_arr[2][3] = { 0, };   // �� ��° 2x3 �迭
    int mul_arr[2][3] = { 0, }; // ���� ����� ������ 2x3 �迭
    int i, j;

    // ù ��° �迭 �Է�
    printf("first array\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf_s("%d", &f_arr[i][j]);
        }
    }
    // �� ��° �迭 �Է�
    printf("second array\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf_s("%d", &s_arr[i][j]);
        }
    }
    // �� �迭�� ���� ��ġ�� ���� ���Ͽ� ��� �迭�� ����
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
