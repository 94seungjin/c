#include <stdio.h>

int result(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("== %ddan == \n", num1);

    int start = (num1 < num2) ? num1 : num2;
    int end = (num1 > num2) ? num1 : num2;

    for (int dan = start; dan <= end; dan++)
    {
        for (int i = 1; i <= 9; i++)
        {
            printf("%d * %d = %d\n", dan, i, result(dan, i));
        }
        printf("\n");
    }

    return 0;
}