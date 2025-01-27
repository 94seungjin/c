#include <stdio.h>
#include <string.h>

void compareString(const char str1[], const char str2[])
{
	if (strcmp(str1, str2) == 0)
	{
		printf("같다\n");
	}
	else
	{
		printf("다르다\n");
	}
}

int main()
{
	char str1[101];
	char str2[101];

	printf("첫 번째 문자열을 입력하세요 (최대 100자) : ");
	scanf_s("%100s", str1, (unsigned int)sizeof(str1));

	printf("두 번째 문자열을 입력하세요 (최대 100자) : ");
	scanf_s("%100s", str2, (unsigned int)sizeof(str2));

	compareString(str1, str2);

	return 0;

}