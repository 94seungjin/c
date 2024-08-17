#include <stdio.h>

int main()
{
    int score[3][3] = { 0 };       // �л� 3���� ������ ������ 2���� �迭
    int student_sum[3] = { 0 };    // �� �л��� ������ ������ �迭
    int subject_sum[3] = { 0 };    // �� ���� �հ踦 ������ �迭
    int i, j;

    // �л��� ���� �Է� �� �հ� ���
    for (i = 0; i < 3; i++)
    {
        printf("%d��° �л��� ���� (����, ����, ���� ������ �Է�): ", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &score[i][j]);  // �� ������ �迭�� ����
            subject_sum[j] += score[i][j];  // ���� �հ� ���
        }
        student_sum[i] = score[i][0] + score[i][1] + score[i][2];  // �л��� ���� ���
    }

    // �л��� ���� �� ���� ���
    printf("\n     ���� ���� ���� ����\n");
    for (i = 0; i < 3; i++)
    {
        printf(" %d��  %3d %4d %4d %4d\n", i + 1, score[i][0], score[i][1], score[i][2], student_sum[i]);
    }

    // ���� �հ� �� ���� ���
    int total_sum = subject_sum[0] + subject_sum[1] + subject_sum[2];
    printf("�հ� %3d %4d %4d %4d\n", subject_sum[0], subject_sum[1], subject_sum[2], total_sum);

    return 0;
}
