#include <stdio.h>

int main()
{
    int number[11] = { 0 };
    int n;

    while (1)
    {
        scanf("%d", &n);

        if (n < 1 || n > 10)
        {
            break;
        }
        number[n]++;
    }

    for (int i = 1; i <= 10; i++)
    {
        if (number[i] > 0)
        {
            printf("%d : %d°³\n", i, number[i]);
        }
    }
    return 0;
}