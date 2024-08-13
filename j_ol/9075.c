#include <stdio.h>

int main()
{
    int count[10] = { 0 };
    int num;

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        int digit = num % 10;
        count[digit]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("%d : %d°³\n", i, count[i]);
        }
    }
    return 0;
}