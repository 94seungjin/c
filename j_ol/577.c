#include <stdio.h>

void changeValue(int* a, int* b)
{
    if (*a > *b)
    {
        *a = *a / 2;
        *b = *b * 2;
    }
    else
    {
        *a = *a * 2;
        *b = *b / 2;
    }
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    changeValue(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}