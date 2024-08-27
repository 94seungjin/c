#include <stdio.h>

void output()
{
    for (int i = 0; i < 10; i++)
    {
        printf("@");
    }
    printf("\n");
}

int main()
{
    printf("first\n");
    output();
    printf("second\n");
    output();
    printf("third\n");
    output();

    return 0;
}