/*
사용자로부터 5명의 학생의 수학, 국어, 영어 점수를
입력 받아서 평균이 가장 높은 사람부터 평균이 가장
낮은 사람까지 정렬되어 출력하도록하세요.
특히 평균을 기준으로 평균 이상인 사람 옆에는 '합격'
아닌 사람은 '불합격' 출력

과목 5개 입력 받음
average
sort 내림차순
조건 평균이상 -> 합격, 평균 미만 ->불합격

*/


#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdbool.h>

#define STUDENT_COUNT	5

typedef struct
{
	char name[50];
	int math;
	int korean;
	int english;
	float average;
	char result[10];
} Student;

void calculateAverage(Student* student)
{
	student->average = (student->math + student->korean + student->english) / 3.0;
}

int compareStudents(const void* a, const void* b)
{
	Student* studentA = (Student*)a;
	Student* studentB = (Student*)b;
	return (studentB->average > studentA->average) - (studentB->average < studentA->average);
}

int main()
{
	Student students[STUDENT_COUNT];
	float totalAverage = 0.0;

	printf("\n----학생 정보 입력 ----\n");
	int i;
	for (i = 0; i < STUDENT_COUNT; i++)
	{
		printf("\n%d번째 학생의 이름 : ", i + 1);
		scanf_s("%s", students[i].name);

		printf("%s의 수학 점수 : ", students[i].name);
		scanf_s("%d", &students[i].math);

		printf("%s의 국어 점수 : ", students[i].name);
		scanf_s("%d", &students[i].korean);

		printf("%s의 영어 점수 : ", students[i].name);
		scanf_s("%d", &students[i].english);

		calculateAverage(&students[i]);
		totalAverage += students[i].average;
	}

	totalAverage /= STUDENT_COUNT;

	printf("\n전체 학생의 평균 점수 : %.2f\n", totalAverage);

	for (i = 0; i < STUDENT_COUNT; i++)
	{
		if (students[i].average >= totalAverage)
		{
			strcpy(students[i].result, "합격");
		}
		else
		{
			strcpy(students[i].result, "불합격");
		}
	}

	qsort(students, STUDENT_COUNT, sizeof(Student), compareStudents);

	printf("\n---- 학생 정보 출력 ----\n");
	printf("이름\t수학\t국어\t영어\t평균\t결과\n");
	printf("-----------------------------------\n");

	for (i = 0; i < STUDENT_COUNT; i++)
	{
		printf("%s\t%d\t%d\t%d\t%.2f\t%s\n");
		students[i].name;
		students[i].math;
		students[i].korean;
		students[i].english;
		students[i].average;
		students[i].result;
	}

	return 0;
}