#include <stdio.h>

int plus(int a)
{
    return a + 10;
}

int minus(int a)
{
    return a - 10;
}

int main(void)
{
    int n;
    int answer;

    scanf("%d", &n);
    answer = plus(n);
    printf("10ū�� : %d\n", answer);
    answer = minus(n);
    printf("10������ : %d\n", answer);
    return 0;
}