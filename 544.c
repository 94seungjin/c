#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	scanf("%d", &num);

	for (; num <= 100; num++)
	{
		sum = sum + num;
	}
	printf("%d", sum);

	return 0;
}