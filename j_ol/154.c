#include <stdio.h>
int main()
{
    double weight[6];
    double sum = 0.0;
    double average = 0.0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &weight[i]);
        sum += weight[i];
    }
    average = sum / 6;
    printf("%.1f", average);
    return 0;
}