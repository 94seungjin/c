#include <stdio.h>

int calculator(int a, int b, char op)
{
    if (op == '+')
    {
        return a + b;
    }
    else if (op == '-')
    {
        return a - b;
    }
    else if (op == '*')
    {
        return a * b;
    }
    else if (op == '/')
    {
        return a / b;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num1, num2, result;
    char op;

    scanf("%d %c %d", &num1, &op, &num2);

    result = calculator(num1, num2, op);
    printf("%d %c %d = %d\n", num1, op, num2, result);
    return 0;
}