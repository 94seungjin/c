#include <stdio.h>

int max(int a, int b, int c)
{
    int max_value = a;
    if (b > max_value)
    {
        max_value = b;
    }
    if (c > max_value)
    {
        max_value = c;
    }
    return max_value;

}

int main()
{
    int num1, num2, num3;
    int result_max;
    scanf("%d %d %d", &num1, &num2, &num3);

    result_max = max(num1, num2, num3);
    printf("%d\n", result_max);
    return 0;
}