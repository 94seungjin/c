#include <stdio.h>

// �� ���� ���� ����ϴ� �Լ�
int sum(int a, int b)
{
    return a + b;
}

// �� ���� ���� ����ϴ� �Լ�
int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2;

    // �� �� �Է� �ȳ� �޽��� ���
    printf("�� ���� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    // �Լ� ȣ�� �� ��� ���
    printf("�� : %d\n", sum(num1, num2));
    printf("�� : %d\n", mul(num1, num2));

    return 0;
}
