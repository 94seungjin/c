#include <stdio.h>

int main()
{
    int counts[6] = { 0 };
    int roll;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &roll);
        if (roll >= 1 && roll <= 6)
        {
            counts[roll - 1]++;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d : %d\n", i + 1, counts[i]);
    }
    return 0;
}