#include <stdio.h>

int main() {
    int num1, num2;
    int sequence[10];  // 10���� ���� ������ �迭

    // ù ��°�� �� ��° �� �Է¹ޱ�
    scanf("%d %d", &num1, &num2);

    // �迭�� ù ��°�� �� ��° �� �ʱ�ȭ
    sequence[0] = num1;
    sequence[1] = num2;

    // �� ��° �׺��� 10��° �ױ��� ���
    for (int i = 2; i < 10; i++) {
        sequence[i] = (sequence[i - 2] + sequence[i - 1]) % 10;  // �����װ� ������ ���� 1�� �ڸ� ���
    }

    // ��� ���
    for (int i = 0; i < 10; i++) {
        printf("%d ", sequence[i]);
    }

    return 0;
}
