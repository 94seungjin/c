#include <stdio.h>

int main()
{
    int num1, num2;
    int start, end;


    scanf("%d %d", &num1, &num2);
    if (num1 > 100 || num2 > 100 || num1 < 0 || num2 < 0)
    {
        return 1;
    }

    if (num1 < num2)
    {
        start = num1;
        end = num2;
    }
    else
    {
        start = num2;
        end = num1;
    }
    for (int i = start; i <= end; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}