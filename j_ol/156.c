#include <stdio.h>

int main()
{
    int number;
    int maxNumber = -1000; // 초기 최대값 설정 (충분히 작은 값)
    int minNumber = 1000;  // 초기 최소값 설정 (충분히 큰 값)

    // 반복문을 통해 최대 100개의 정수를 입력받음
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &number);

        if (number == 999) // 999가 입력되면 반복문 종료
        {
            break;
        }

        // 최대값과 최소값을 업데이트
        if (number > maxNumber) {
            maxNumber = number;
        }

        if (number < minNumber) {
            minNumber = number;
        }
    }

    // 최대값과 최소값 출력
    printf("max : %d\nmin : %d\n", maxNumber, minNumber);

    return 0;
}
