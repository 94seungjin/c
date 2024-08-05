#include <stdio.h>

int main()
{
    int n = 1;
    int a = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a);
            a += 2;
            if (a >= 10)
            {
                a = 1;
            }
        }
        printf("\n");
    }
    return 0;
}