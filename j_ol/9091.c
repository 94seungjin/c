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

    printf("두 수를 입력하세요. ");
    scanf("%d %d", &num1, &num2);

    sum = calsum(num1, num2);
    multiply = calmultiply(num1, num2);

    printf("합 : %d\n", sum);
    printf("곱 : %d\n", multiply);

    return 0;
}