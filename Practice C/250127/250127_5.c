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
	printf("���ڿ��� �Է��ϼ��� (�ִ� 100��): ");
	scanf("%100s", str, (unsigned int)sizeof(str));

	reverseString(str);
	printf("���� ���ڿ� : %s\n", str);

	return 0;
}