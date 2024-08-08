#include <stdio.h>

int main()
{
    int number[100];
    int count = 0;

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &number[i]);
        if (number[i] == 0)
        {
            break;
        }
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", number[i]);
    }

    return 0;
}