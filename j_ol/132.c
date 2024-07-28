#include <stdio.h>

int main()
{
    int num1 = 0;
    int sum = 0;
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {
        if (i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}