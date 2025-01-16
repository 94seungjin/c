#include <stdio.h>

int add1_element(int(*array)[2], int row);
int main()
{
	int array[3][2];
	int i;
	int j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf_s("%d", &array[i][j]);
		}
	}

	add1_element(array, 3);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("array[%d][%d] : %d \n", i, j, array[i][j]);
		}
	}

	return 0;
}

int add1_element(int(*array)[2], int row)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 2; j++)
		{
			array[i][j]++;
		}
	}

	return 0;
}