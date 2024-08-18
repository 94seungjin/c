#include <stdio.h>

int main()
{
    int pascal[10][10] = { 0 };
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
    return 0;
}