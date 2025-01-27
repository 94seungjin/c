#include <stdio.h>
#include <string.h>

int findSubstring(const char* mainStr, const char* subStr)
{
	char* position = strstr(mainStr, subStr);
	if (position != NULL)
	{
		return (int)(position - mainStr);
	}
	else
	{
		return -1;
	}
}

int main()
{
	char mainStr[101];
	char subStr[101];

	printf("첫 번째 문자열을 입력하세요 (최대 100자) : ");
	scanf_s("%100s", mainStr, (unsigned int)sizeof(mainStr));

	printf("두 번째 문자열을 입력하세요 (최대 100자) : ");
	scanf_s("%100s", subStr, (unsigned int)sizeof(subStr));

	int position = findSubstring(mainStr, subStr);
	if (position == -1)
	{
		printf("'%s'은(는) '%s'에 없습니다.\n", subStr, mainStr);
	}
	else
	{
		printf("'%s은(는) '%s'의 위치 %d에서 발견됨", subStr, mainStr, position);
	}

	return 0;
}
