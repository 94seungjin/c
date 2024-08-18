#include <stdio.h>

int main()
{
    int scores[5][4];
    int passcount = 0;

    int i, j = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &scores[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        int sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum += scores[i][j];
        }
        double average = sum / 4.0;

        if (average >= 80)
        {
            printf("pass\n");
            passcount++;
        }
        else
        {
            printf("fail\n");
        }
    }

    printf("Successful : %d\n", passcount);
    return 0;
}