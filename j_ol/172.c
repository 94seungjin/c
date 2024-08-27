#include <stdio.h>

void numrect(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

int main()
{
    int number;
    scanf("%d", &number);

    if (number > 0 && number < 1000)
    {
        numrect(number);
    }

    return 0;
}