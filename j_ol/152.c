#include <stdio.h>

int main()
{
    int number[10];
    int evenNumber = 0;
    int oddNumber = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
        if (i % 2 == 0)
        {
            oddNumber += number[i];
        }
        else
        {
            evenNumber += number[i];
        }
    }
    printf("odd : %d\n", oddNumber);
    printf("even : %d\n", evenNumber);

    return 0;
}