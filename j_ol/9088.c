#include <stdio.h>

// 사칙연산을 처리하는 함수
int calculate(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;  // '/' 연산의 경우 정수 부분만 출력
    default:
        return 0;  // 사칙연산 이외의 연산자는 0을 반환
    }
}

int main()
{
    int num1, num2, result;
    char op;

    // 연산식 입력받기 (예: "10 + 20")
    scanf("%d %c %d", &num1, &op, &num2);

    // calculate 함수를 호출하여 연산 결과를 얻음
    result = calculate(num1, num2, op);

    // 결과 출력
    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}
