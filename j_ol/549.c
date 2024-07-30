#include <stdio.h>

int main()
{
    int n = 0;
    int sum = 0;
    int count = 0;
    int c_odd = 1;
    scanf("%d", &n);

    while (sum < n)
    {
        sum += c_odd;
        c_odd += 2;
        count++;
    }
    printf("%d %d", count, sum);

    return 0;
}