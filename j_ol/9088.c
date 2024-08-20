#include <stdio.h>

// ��Ģ������ ó���ϴ� �Լ�
int calculate(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;  // '/' ������ ��� ���� �κи� ���
    default:
        return 0;  // ��Ģ���� �̿��� �����ڴ� 0�� ��ȯ
    }
}

int main()
{
    int num1, num2, result;
    char op;

    // ����� �Է¹ޱ� (��: "10 + 20")
    scanf("%d %c %d", &num1, &op, &num2);

    // calculate �Լ��� ȣ���Ͽ� ���� ����� ����
    result = calculate(num1, num2, op);

    // ��� ���
    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}
