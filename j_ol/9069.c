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
            printf("�߸� �Է��Ͽ����ϴ�.\n");
            continue; // �߸��� �Է� �� �ٽ� �Է¹޵��� continue ���
        }

        // ���� �Ǵ� ���ǹ�
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

        printf("�Է��Ͻ� ���� �� ���� %d���Դϴ�.\n", monthday[month - 1]);
    }

    return 0;
}
