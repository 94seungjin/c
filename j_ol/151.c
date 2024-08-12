#include <stdio.h>

int main()
{
    int number[5];
    int sum = 0;


    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &number[i]);
    }
    sum = number[0] + number[2] + number[4];

    printf("%d\n", sum);

    return 0;
}