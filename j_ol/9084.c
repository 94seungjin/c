#include <stdio.h>

void star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    star(num);

    return 0;
}
