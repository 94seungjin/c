#include <stdio.h>
#include <ctype.h>

void convertCase(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		else if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
		}
	}
}

int main()
{
	char str[101];
	printf("���ڿ��� �Է��ϼ��� (�ִ� 100��): ");
	scanf_s("%100s", str, (unsigned int)sizeof(str));

	convertCase(str);
	printf("��ȯ�� ���ڿ� : %s\n", str);

	return 0;
}