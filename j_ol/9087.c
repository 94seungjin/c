#include <stdio.h>

double average(int a, int b, int c)
{
    int sum = a + b + c;
    double result_avg = (double)sum / 3;
    return result_avg;
}
int main()
{
    int score1, score2, score3;
    printf("�������� ������ �Է��ϼ���. ");
    scanf("%d %d %d", &score1, &score2, &score3);
    double f_average = average(score1, score2, score3);
    printf("��� : %.2f", f_average);
    return 0;
}
