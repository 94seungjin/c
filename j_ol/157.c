#include <stdio.h>

int main()
{
    int number[100];
    int count = 0;
    int sum = 0;
    double average = 0.0;
    int i;

    // 최대 100개의 정수를 입력받음
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &number[i]);

        if (number[i] == 0)  // 0이 입력되면 반복문 종료
        {
            break;
        }
    }

    // 입력된 정수 중 5의 배수의 개수와 합 계산
    for (int j = 0; j < i; j++)
    {
        if (number[j] % 5 == 0)
        {
            sum += number[j];  // 5의 배수의 합계 계산
            count++;           // 5의 배수의 개수 증가
        }
    }

    if (count > 0)
    {
        average = (double)sum / count;  // 평균 계산
    }

    // 결과 출력
    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", average);

    return 0;
}
