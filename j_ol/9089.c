#include <stdio.h>

// ù ��° swap �Լ�: �� ������ ��ȯ�Ͽ� ����ϴ� �Լ�
void swap_first(int num1, int num2)
{
    printf("ù ��° �Լ� ������ x = %d, y = %d\n", num1, num2);

    int tmp = num1;
    num1 = num2;
    num2 = tmp;

    printf("ù ��° �Լ� ������ a = %d, b = %d\n", num1, num2);
}

// �� ��° swap �Լ�: �� ������ ��ȯ�Ͽ� ����ϴ� �Լ�
void swap_second(int num1, int num2)
{
    printf("�� ��° �Լ� ������ x = %d, y = %d\n", num1, num2);

    int tmp = num1;
    num1 = num2;
    num2 = tmp;

    printf("�� ��° �Լ� ������ a = %d, b = %d\n", num1, num2);
}

int main()
{
    int x, y;

    // ����ڷκ��� �� ���� �Է¹ޱ�
    printf("�� ���� �Է��ϼ���. ");
    scanf("%d %d", &x, &y);

    // ù ��° swap �Լ� ȣ��
    swap_first(x, y);

    // �� ��° swap �Լ� ȣ��
    swap_second(x, y);

    return 0;
}
