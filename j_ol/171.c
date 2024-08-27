#include <stdio.h>

int uptosum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int number;
    scanf("%d", &number);

    if (number > 0 && number <= 1000)
    {
        int result = uptosum(number);
        printf("%d\n", result);
    }
    return 0;
}