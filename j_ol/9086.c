#include <stdio.h>

double average(int a, int b, int c)
{
    int sum = a + b + c;
    double avg = (double)sum / 3;
    return avg;
}

int main()
{
    int subject1, subject2, subject3;
    printf("�������� ������ �Է��ϼ���. ");

    scanf("%d %d %d", &subject1, &subject2, &subject3);

    double result_avg = average(subject1, subject2, subject3);
    printf("��� : %.2f\n", result_avg);

    return 0;
}