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
		printf("책 %d 정보 입력 : ", i);
		scanf_s("%s%s%s", bookList[i].name, bookList[i].auth, bookList[i].publ);
		bookList[i].borrowed = 0;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("---------------------- \n");
		printf("책 %s의 정보\n", bookList[i].name);
		printf("저자 %s의 정보\n", bookList[i].auth);
		printf("출판사 %s의 정보\n", bookList[i].publ);

		if (bookList[i].borrowed == 0)
		{
			printf("안 빌려짐\n");
		}
		else
		{
			printf("빌려짐 \n");
		}
	}

	return 0;
}