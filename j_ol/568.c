#include <stdio.h>

int main()
{
    int first_array[2][4] = { 0, };
    int second_array[2][4] = { 0, };
    int multiply_array[2][4] = { 0, };

    printf("first array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &first_array[i][j]);
        }
    }

    printf("second array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &first_array[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            multiply_array[i][j] = first_array[i][j] * second_array[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", multiply_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}