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
            printf("피보나치 수열 10항 : %d \n", second);
        }
        else if (n == 20)
        {
            printf("피보나치 수열 20항 : %d \n", second);
        }
        else if (n == 30)
        {
            printf("피보나치 수열 30항 : %d \n", second);
        }
        else if (n == 40)
        {
            printf("피보나치 수열 40항 : %d \n", second);
        }
    }

    return 0;
}