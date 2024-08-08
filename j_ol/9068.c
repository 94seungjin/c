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

    for (int i = 1; i < count; i += 2)
    {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}