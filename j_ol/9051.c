#include <stdio.h>

int main()
{
    int n[10];
    int even = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0)
        {
            even++;
        }
        else
        {
        }
    }
    printf("입력받은 짝수는 %d개입니다.\n", even);

    return 0;
}
