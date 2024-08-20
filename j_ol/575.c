#include <stdio.h>

int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}

int main()
{
    int number1;
    int number2;
    scanf("%d %d", &number1, &number2);

    printf("%d\n", power(number1, number2));
    return 0;
}