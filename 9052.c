#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;
    int count = 5;
    float avg = 0;

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("���� : %d\n", sum);

    avg = (float)sum / count;
    printf("��� : %.1f\n", avg);

    return 0;
}