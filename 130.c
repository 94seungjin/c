#include <stdio.h>

int main()
{
    int number;
    scanfs("%d", &number);
    for (int i = 0; i < number; i++)
    {
        if (number > 0 && number <= 10)
        {
            printf("JUNGOL \n");
        }
    }
    return 0;
}