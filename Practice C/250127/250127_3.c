#include <stdio.h>

int stringAdd(char* dest, char* src);

int main()
{
	char str1[100] = "hello my name is ";
	char str2[] = "Psi";

	printf("��ġ�� ���� : %s \n", str1);

	stringAdd(str1, str2);

	printf("��ģ ���� : %s \n", str1);

	return 0;
}

int stringAdd(char* dest, char* src)
{
	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return 1;
}