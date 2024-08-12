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
    printf("%d \n", count);

    for (int i = 0; i < count; i++)
    {
        if (number[i] % 2 == 0)
        {
            printf("%d ", number[i] / 2);
        }
        else
        {
            printf("%d ", number[i] * 2);
        }
    }
    return 0;
}