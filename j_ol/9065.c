#include <stdio.h>

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
        printf("%d ", array[i]);
    }
    return 0;
}