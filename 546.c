/*
1. Á¶°Ç
    (1) 0<n<=10
    (2) avg>=80 pass
    (3) avg<80 fail
    (4) avg %.1f
*/
#include <stdio.h>

int main()
{
    int n = 0;
    int score = 0;
    int sum = 0;
    float avg = 0.0;

    do
    {
        scanf("%d", &n);
    } while (n <= 0 || n > 10);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score);
        sum += score;

    }
    avg = (float)sum / n;
    printf("avg : %.1f\n", avg);

    if (avg >= 80)
    {
        printf("pass\n");
    }

    if (avg < 80)
    {
        printf("fail\n");
    }

    return 0;
}