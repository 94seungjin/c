#include <stdio.h>

int main()
{
    int number[100];
    int count = 0;
    int sum = 0;
    double average = 0.0;
    int i;

    // �ִ� 100���� ������ �Է¹���
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &number[i]);

        if (number[i] == 0)  // 0�� �ԷµǸ� �ݺ��� ����
        {
            break;
        }
    }

    // �Էµ� ���� �� 5�� ����� ������ �� ���
    for (int j = 0; j < i; j++)
    {
        if (number[j] % 5 == 0)
        {
            sum += number[j];  // 5�� ����� �հ� ���
            count++;           // 5�� ����� ���� ����
        }
    }

    if (count > 0)
    {
        average = (double)sum / count;  // ��� ���
    }

    // ��� ���
    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", average);

    return 0;
}
