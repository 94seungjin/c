#include <stdio.h>

int main()
{
    int number[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }

    printf("%d ", number[2]);
    printf("%d ", number[4]);
    printf("%d ", number[9]);

    return 0;
}