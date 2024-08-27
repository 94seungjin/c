#include <stdio.h>

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int score[3][3];
    int studentSum[3] = { 0 };
    int subjectSum[3] = { 0 };

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
        studentSum[i] = sum(score[i][0], score[i][1], score[i][2]);
    }

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            subjectSum[j] += score[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", score[i][j]);
        }
        printf("%d\n", studentSum[i]);
    }

    for (int j = 0; j < 3; j++)
    {
        printf("%d ", subjectSum[j]);
    }
    printf("%d\n", sum(subjectSum[0], subjectSum[1], subjectSum[2]));

    return 0;
}