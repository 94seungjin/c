#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 0;
    int count = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n < 0 || n>100)
        {
            break;
        }
        else
        {
            sum = sum + n;
            count++;
        }
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (float)sum / count);

    return 0;
}