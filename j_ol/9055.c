#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0, count = 0;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
        count++;
        if (sum >= num)
            break;
    }
    printf("%d %d", count, sum);

    return 0;
}