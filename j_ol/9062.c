#include <stdio.h>

int main()
{
    char ch = 'a';
    int n = 1;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", ch);
            ch++;
        }

        for (int j = 0; j < 5 - i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}