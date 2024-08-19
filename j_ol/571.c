#include <stdio.h>

void printstr()
{
    printf("~!@#$^&*()_+|\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printstr();
    }

    return 0;
}