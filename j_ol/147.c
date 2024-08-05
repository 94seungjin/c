#include <stdio.h>

int main()
{
    int n = 0;
    int count = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < n - i; k++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}