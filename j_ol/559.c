#include <stdio.h>

int main()
{
    double arrayscore[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
    int classA;
    int classB;

    scanf("%d %d", &classA, &classB);

    double d_sum = arrayscore[classA - 1] + arrayscore[classB - 1];
    printf("%.1f\n", d_sum);

    return 0;
}