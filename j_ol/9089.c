#include <stdio.h>

// 첫 번째 swap 함수: 두 정수를 교환하여 출력하는 함수
void swap_first(int num1, int num2)
{
    printf("첫 번째 함수 실행중 x = %d, y = %d\n", num1, num2);

    int tmp = num1;
    num1 = num2;
    num2 = tmp;

    printf("첫 번째 함수 실행후 a = %d, b = %d\n", num1, num2);
}

// 두 번째 swap 함수: 두 정수를 교환하여 출력하는 함수
void swap_second(int num1, int num2)
{
    printf("두 번째 함수 실행중 x = %d, y = %d\n", num1, num2);

    int tmp = num1;
    num1 = num2;
    num2 = tmp;

    printf("두 번째 함수 실행후 a = %d, b = %d\n", num1, num2);
}

int main()
{
    int x, y;

    // 사용자로부터 두 수를 입력받기
    printf("두 수를 입력하세요. ");
    scanf("%d %d", &x, &y);

    // 첫 번째 swap 함수 호출
    swap_first(x, y);

    // 두 번째 swap 함수 호출
    swap_second(x, y);

    return 0;
}
