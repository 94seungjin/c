#include <stdio.h>

int main()
{
    // ���� 10���� ������ �� �ִ� �迭 ����
    int number[10];

    // 1���� 10���� �迭�� ����
    for (int i = 0; i < 10; i++) {
        number[i] = i + 1;
    }

    // �迭�� ���� ���ʴ�� ���
    for (int i = 0; i < 10; i++) {
        printf("%d ", number[i]);
    }
    printf("\n"); // �ٹٲ�

    return 0;
}
