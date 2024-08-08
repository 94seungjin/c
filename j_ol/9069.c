#include <stdio.h>

int main()
{
    int year;
    int month;
    int monthday[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    while (1)
    {
        printf("YEAR = ");
        scanf("%d", &year);

        printf("MONTH = ");
        scanf("%d", &month);

        if (month == 0)
        {
            break;
        }

        if (month < 1 || month > 12)
        {
            printf("잘못 입력하였습니다.\n");
            continue; // 잘못된 입력 시 다시 입력받도록 continue 사용
        }

        // 윤년 판단 조건문
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (month == 2)
            {
                monthday[1] = 29;
            }
        }
        else
        {
            if (month == 2)
            {
                monthday[1] = 28;
            }
        }

        printf("입력하신 달의 날 수는 %d일입니다.\n", monthday[month - 1]);
    }

    return 0;
}
