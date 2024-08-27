#include <stdio.h>

int result(int a, int b)
{
    if (a > b)
    {
        return (a * a) - (b * b);
    }
    else if (a < b)
    {
        return (b * b) - (a * a);
    }
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", result(num1, num2));
    return 0;
}