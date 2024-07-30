#include <stdio.h>

int main()
{
    int number1 = 0;
    int number2 = 0;

    scanf("%d %d", &number1, &number2);
    if (number1 >= 2 && number1 <= 9 && number2 >= 2 && number2 <= 9)
    {
        if (number1 > number2)
        {
            int temp = number1;
            number1 = number2;
            number2 = temp;
        }
    }

    for (int i = 1; i <= 9; i++)
    {
        for (int j = number2; j >= number1; j--)
        {
            printf("%d * %d = %3d   ", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}