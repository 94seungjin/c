#include <stdio.h>

int main()
{
    int n;
    int count = 1;
    char ch = 'A';

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%d ", count);
            count++;
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}