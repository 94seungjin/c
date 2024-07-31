#include <stdio.h>

int main()
{
    int n = 0;
    int count = 0;
    int sum = 0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        sum += n;
        count++;
    }
    if (count > 0)
    {
        int avg = sum / count;
        printf("%d %d", sum, avg);
    }

    return 0;
}