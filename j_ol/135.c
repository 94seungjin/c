#include <stdio.h>

int main()
{
    int num1, num2 = 0;
    int sum = 0;
    int count = 0;
    float avg = 0.0;

    scanf("%d %d", &num1, &num2);

    int start = (num1 < num2) ? num1 : num2;
    int end = (num1 > num2) ? num1 : num2;

    for (int i = start; i <= end; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
            count++;
        }
    }
    if (count != 0)
    {
        avg = (float)sum / count;
    }
    else
    {
        avg = 0;
    }

    avg = (int)(avg * 10 + 0.5) / 10.0;

    printf("sum : %d\n", sum);
    printf("avg : %.1f", avg);

    return 0;
}