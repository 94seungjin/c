#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    if (a > b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int result_sum = sum(num1, num2);  // sum �Լ��� ȣ���Ͽ� ���� ���
    int result_sub = sub(num1, num2);  // sub �Լ��� ȣ���Ͽ� ���� ���

    printf("�� ���� �� = %d\n", result_sum);
    printf("�� ���� �� = %d\n", result_sub);

    return 0;
}
