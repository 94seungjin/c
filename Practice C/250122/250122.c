#include <stdio.h>

int main()
{
	int num;
	int i;
	char c;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	getchar();

	printf("문자를 입력하세요 : ");
	scanf_s("%c", &c);

	printf("입력한 문자 : %c", c);

	return 0;
}