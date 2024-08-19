#include <stdio.h>

void rectangle(int n)
{
    int value = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", value);
            value++;
        }
        printf("\n");
    }
}

int main()
{
    int number;
    scanf("%d", &number);

    rectangle(number);
    return 0;
}