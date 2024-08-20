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

    int result_sum = sum(num1, num2);  // sum 함수를 호출하여 합을 계산
    int result_sub = sub(num1, num2);  // sub 함수를 호출하여 차를 계산

    printf("두 수의 합 = %d\n", result_sum);
    printf("두 수의 차 = %d\n", result_sub);

    return 0;
}
