#include <stdio.h>

int main()
{
    int number;
    int maxNumber = -1000; // �ʱ� �ִ밪 ���� (����� ���� ��)
    int minNumber = 1000;  // �ʱ� �ּҰ� ���� (����� ū ��)

    // �ݺ����� ���� �ִ� 100���� ������ �Է¹���
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &number);

        if (number == 999) // 999�� �ԷµǸ� �ݺ��� ����
        {
            break;
        }

        // �ִ밪�� �ּҰ��� ������Ʈ
        if (number > maxNumber) {
            maxNumber = number;
        }

        if (number < minNumber) {
            minNumber = number;
        }
    }

    // �ִ밪�� �ּҰ� ���
    printf("max : %d\nmin : %d\n", maxNumber, minNumber);

    return 0;
}
