#include <stdio.h>
#include <string.h>

void compareString(const char str1[], const char str2[])
{
	if (strcmp(str1, str2) == 0)
	{
		printf("����\n");
	}
	else
	{
		printf("�ٸ���\n");
	}
}

int main()
{
	char str1[101];
	char str2[101];

	printf("ù ��° ���ڿ��� �Է��ϼ��� (�ִ� 100��) : ");
	scanf_s("%100s", str1, (unsigned int)sizeof(str1));

	printf("�� ��° ���ڿ��� �Է��ϼ��� (�ִ� 100��) : ");
	scanf_s("%100s", str2, (unsigned int)sizeof(str2));

	compareString(str1, str2);

	return 0;

}