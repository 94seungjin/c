#include <stdio.h>

int main()
{
    int score[3][3] = { 0 };       // 학생 3명의 점수를 저장할 2차원 배열
    int student_sum[3] = { 0 };    // 각 학생의 총점을 저장할 배열
    int subject_sum[3] = { 0 };    // 각 과목별 합계를 저장할 배열
    int i, j;

    // 학생별 점수 입력 및 합계 계산
    for (i = 0; i < 3; i++)
    {
        printf("%d번째 학생의 점수 (국어, 영어, 수학 순서로 입력): ", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &score[i][j]);  // 각 점수를 배열에 저장
            subject_sum[j] += score[i][j];  // 과목별 합계 계산
        }
        student_sum[i] = score[i][0] + score[i][1] + score[i][2];  // 학생별 총점 계산
    }

    // 학생별 점수 및 총점 출력
    printf("\n     국어 영어 수학 총점\n");
    for (i = 0; i < 3; i++)
    {
        printf(" %d번  %3d %4d %4d %4d\n", i + 1, score[i][0], score[i][1], score[i][2], student_sum[i]);
    }

    // 과목별 합계 및 총점 출력
    int total_sum = subject_sum[0] + subject_sum[1] + subject_sum[2];
    printf("합계 %3d %4d %4d %4d\n", subject_sum[0], subject_sum[1], subject_sum[2], total_sum);

    return 0;
}
