#include <stdio.h>

int main()
{
	int num;
	int i;
	char c;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	getchar();

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &c);

	printf("�Է��� ���� : %c", c);

	return 0;
}