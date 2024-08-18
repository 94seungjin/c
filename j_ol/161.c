#include <stdio.h>

int main()
{
    int count[11] = { 0 };
    int score;

    while (1)
    {
        scanf("%d", &score);
        if (score == 0)
        {
            break;
        }
        if (score >= 0 && score <= 100)
        {
            count[score / 10]++;
        }
    }

    for (int i = 10; i >= 0; i--)
    {
        if (count[i] > 0)
        {
            if (i == 10)
            {
                printf("100 : %d person\n", count[i]);
            }
            else
            {
                printf("%d0 : %d person\n", i, count[i]);
            }
        }
    }
    return 0;
}