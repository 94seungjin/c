#include <stdio.h>

int calsum(int a, int b)
{
    return a + b;
}

int calmultiply(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2, sum, multiply;

    printf("�� ���� �Է��ϼ���. ");
    scanf("%d %d", &num1, &num2);

    sum = calsum(num1, num2);
    multiply = calmultiply(num1, num2);

    printf("�� : %d\n", sum);
    printf("�� : %d\n", multiply);

    return 0;
}