/*
1. �Է�
    (1) 10���� ����
2. ���
    (1) 3�� ��� ����
    (2) 5�� ��� ����
*/

#include <stdio.h>

int main()
{
    int n3 = 0;
    int n5 = 0;

    for (int i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        if (num % 3 == 0)
        {
            n3++;
        }
        if (num % 5 == 0)
        {
            n5++;
        }
    }
    printf("Multiples of 3 : %d \n", n3);
    printf("Multiples of 5 : %d \n", n5);

    return 0;
}