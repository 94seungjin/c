#include <stdio.h>

int copyString(char* scr, char* dest);

int main()
{
	char str1[] = "hello";
	char str2[] = "hi";

	printf("���� ���� : %s \n", str1);

	copyString(str1, str2);

	printf("���� ���� : %s \n", str1);

	return 0;
}

int copyString(char* dest, char* src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return 1;
}