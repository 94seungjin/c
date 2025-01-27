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

	printf("ù ��° ���ڿ��� �Է��ϼ��� (�ִ� 100��) : ");
	scanf_s("%100s", mainStr, (unsigned int)sizeof(mainStr));

	printf("�� ��° ���ڿ��� �Է��ϼ��� (�ִ� 100��) : ");
	scanf_s("%100s", subStr, (unsigned int)sizeof(subStr));

	int position = findSubstring(mainStr, subStr);
	if (position == -1)
	{
		printf("'%s'��(��) '%s'�� �����ϴ�.\n", subStr, mainStr);
	}
	else
	{
		printf("'%s��(��) '%s'�� ��ġ %d���� �߰ߵ�", subStr, mainStr, position);
	}

	return 0;
}
