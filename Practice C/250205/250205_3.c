#include <stdio.h>
struct Books
{
	char name[30];
	char auth[30];
	char publ[30];
	int borrowed;
};

int main()
{
	struct Books bookList[3];

	for (int i = 0; i < 3; i++)
	{
		printf("å %d ���� �Է� : ", i);
		scanf_s("%s%s%s", bookList[i].name, bookList[i].auth, bookList[i].publ);
		bookList[i].borrowed = 0;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("---------------------- \n");
		printf("å %s�� ����\n", bookList[i].name);
		printf("���� %s�� ����\n", bookList[i].auth);
		printf("���ǻ� %s�� ����\n", bookList[i].publ);

		if (bookList[i].borrowed == 0)
		{
			printf("�� ������\n");
		}
		else
		{
			printf("������ \n");
		}
	}

	return 0;
}