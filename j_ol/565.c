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
        if (num >= 10)
        {
            int tdigit = num / 10;
            count[tdigit]++;
        }
        else if (num < 10)
        {
            count[0]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}