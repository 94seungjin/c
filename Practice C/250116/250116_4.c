/*
����ڷκ��� 5���� �л��� ����, ����, ���� ������
�Է� �޾Ƽ� ����� ���� ���� ������� ����� ����
���� ������� ���ĵǾ� ����ϵ����ϼ���.
Ư�� ����� �������� ��� �̻��� ��� ������ '�հ�'
�ƴ� ����� '���հ�' ���

���� 5�� �Է� ����
average
sort ��������
���� ����̻� -> �հ�, ��� �̸� ->���հ�

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

	printf("\n----�л� ���� �Է� ----\n");
	int i;
	for (i = 0; i < STUDENT_COUNT; i++)
	{
		printf("\n%d��° �л��� �̸� : ", i + 1);
		scanf_s("%s", students[i].name);

		printf("%s�� ���� ���� : ", students[i].name);
		scanf_s("%d", &students[i].math);

		printf("%s�� ���� ���� : ", students[i].name);
		scanf_s("%d", &students[i].korean);

		printf("%s�� ���� ���� : ", students[i].name);
		scanf_s("%d", &students[i].english);

		calculateAverage(&students[i]);
		totalAverage += students[i].average;
	}

	totalAverage /= STUDENT_COUNT;

	printf("\n��ü �л��� ��� ���� : %.2f\n", totalAverage);

	for (i = 0; i < STUDENT_COUNT; i++)
	{
		if (students[i].average >= totalAverage)
		{
			strcpy(students[i].result, "�հ�");
		}
		else
		{
			strcpy(students[i].result, "���հ�");
		}
	}

	qsort(students, STUDENT_COUNT, sizeof(Student), compareStudents);

	printf("\n---- �л� ���� ��� ----\n");
	printf("�̸�\t����\t����\t����\t���\t���\n");
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