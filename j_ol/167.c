#include <stdio.h>

int main()
{
    int array[4][2];
    int row_sum[4] = { 0 };
    int col_sum[2] = { 0 };
    int tot_sum = 0;
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &array[i][j]);
            row_sum[i] += array[i][j];
            col_sum[j] += array[i][j];
            tot_sum += array[i][j];
        }
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d ", row_sum[i] / 2);
    }
    printf("\n");

    for (j = 0; j < 2; j++)
    {
        printf("%d ", col_sum[j] / 4);
    }
    printf("\n");

    printf("%d\n", tot_sum / (4 * 2));

    return 0;
}