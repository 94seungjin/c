#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
	int length = strlen(str);
	int i;
	for (i = 0; i < length / 2; i++)
	{
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
}

int main()
{
	char str[101];
	printf("문자열을 입력하세요 (최대 100자): ");
	scanf("%100s", str, (unsigned int)sizeof(str));

	reverseString(str);
	printf("역순 문자열 : %s\n", str);

	return 0;
}