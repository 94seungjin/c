#include <stdio.h>

int main()
{
    int first = 1;
    int second = 1;
    int temp;

    for (int n = 3; n <= 40; n++)
    {
        temp = second;
        second = first + second;
        first = temp;

        if (n == 10)
        {
            printf("�Ǻ���ġ ���� 10�� : %d \n", second);
        }
        else if (n == 20)
        {
            printf("�Ǻ���ġ ���� 20�� : %d \n", second);
        }
        else if (n == 30)
        {
            printf("�Ǻ���ġ ���� 30�� : %d \n", second);
        }
        else if (n == 40)
        {
            printf("�Ǻ���ġ ���� 40�� : %d \n", second);
        }
    }

    return 0;
}