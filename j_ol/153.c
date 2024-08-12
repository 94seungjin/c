#include <stdio.h>

int main(void) {

	int a[100] = { 0, };
	int i = 0;//사용자가 입력한 횟수를 체크

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &a[i]);

		if (a[i] == -1)
		{
			break;
		}
	}

	if (i <= 2)
	{
		for (int z = 0; z <= i - 1; z++)
		{
			printf("%d ", a[z]);
		}
	}
	else
	{
		for (int z = i - 3; z <= i - 1; z++)
		{
			printf("%d ", a[z]);
		}
	}
	return 0;
}