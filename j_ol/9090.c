#include <stdio.h>

// 두 수의 합을 계산하는 함수
int sum(int a, int b)
{
    return a + b;
}

// 두 수의 곱을 계산하는 함수
int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2;

    // 두 수 입력 안내 메시지 출력
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    // 함수 호출 후 결과 출력
    printf("합 : %d\n", sum(num1, num2));
    printf("곱 : %d\n", mul(num1, num2));

    return 0;
}
