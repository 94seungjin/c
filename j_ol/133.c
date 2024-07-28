#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;
    float avg = 0.0;

    scanf("%d", &num);

    if (num > 100)
    {
        return 1;
    }

    int numbers[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &numbers[num]);
        sum += numbers[num];
    }

    avg = (float)sum / num;
    printf("%.2f", avg);
    return 0;
}