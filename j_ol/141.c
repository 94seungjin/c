#include <stdio.h>

int main()
{
    int n;
    int count = 1;

    scanf("%d", &n);

    while (1)
    {
        int mul = n * count;

        if (mul >= 100)
        {
            break;
        }

        printf("%d ", mul);

        if (mul % 10 == 0)
        {
            break;
        }
        count++;
    }
    return 0;
}