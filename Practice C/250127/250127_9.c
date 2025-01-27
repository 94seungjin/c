#include <stdio.h>
#include <string>

#define	MAX_BOOKS = 100;

typedef struct
{
	char title[101];
	char author[101];
	char published[101];
	int isBorrowed;
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook()
{
	if (bookCount >= MAX_BOOKS)
	{
		printf("�������� ������. �� �̻� �߰��� �� ����\n");
		return;
	}

    printf("å ������ �Է��ϼ���: ");
    fgets(library[bookCount].title, sizeof(library[bookCount].title), stdin);
    library[bookCount].title[strcspn(library[bookCount].title, "\n")] = '\0'; // �ٹٲ� ���� ����

    printf("���ڸ� �Է��ϼ���: ");
    fgets(library[bookCount].author, sizeof(library[bookCount].author), stdin);
    library[bookCount].author[strcspn(library[bookCount].author, "\n")] = '\0'; // �ٹٲ� ���� ����

    printf("���ǻ縦 �Է��ϼ���: ");
    fgets(library[bookCount].publisher, sizeof(library[bookCount].publisher), stdin);
    library[bookCount].publisher[strcspn(library[bookCount].publisher, "\n")] = '\0'; // �ٹٲ� ���� ����

    library[bookCount].isBorrowed = 0;
    bookCount++;
    printf("å�� �߰��Ǿ����ϴ�.\n");
}

void searchByTitle()
{
    char title[101];
    printf("�˻��� å ������ �Է��ϼ���: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // �ٹٲ� ���� ����

    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].title, title) == 0)
        {
            printf("[å ����]\n����: %s\n����: %s\n���ǻ�: %s\n�뿩 ����: %s\n",
                library[i].title, library[i].author, library[i].publisher,
                library[i].isBorrowed ? "�뿩 ��" : "�뿩 ����");
            return;
        }
    }
    printf("å�� ã�� �� �����ϴ�.\n");
}

void searchByAuthor()
{
    char author[101];
    printf("�˻��� ���ڸ� �Է��ϼ���: ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = '\0'; // �ٹٲ� ���� ����

    int found = 0;
    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].author, author) == 0)
        {
            printf("[å ����]\n����: %s\n����: %s\n���ǻ�: %s\n�뿩 ����: %s\n",
                library[i].title, library[i].author, library[i].publisher,
                library[i].isBorrowed ? "�뿩 ��" : "�뿩 ����");
            found = 1;
        }
    }
    if (!found)
    {
        printf("å�� ã�� �� �����ϴ�.\n");
    }
}

void searchByPublisher()
{
    char publisher[101];
    printf("�˻��� ���ǻ縦 �Է��ϼ���: ");
    fgets(publisher, sizeof(publisher), stdin);
    publisher[strcspn(publisher, "\n")] = '\0'; // �ٹٲ� ���� ����

    int found = 0;
    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].publisher, publisher) == 0)
        {
            printf("[å ����]\n����: %s\n����: %s\n���ǻ�: %s\n�뿩 ����: %s\n",
                library[i].title, library[i].author, library[i].publisher,
                library[i].isBorrowed ? "�뿩 ��" : "�뿩 ����");
            found = 1;
        }
    }
    if (!found)
    {
        printf("å�� ã�� �� �����ϴ�.\n");
    }
}

void borrowBook()
{
    char title[101];
    printf("�뿩�� å ������ �Է��ϼ���: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // �ٹٲ� ���� ����

    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].title, title) == 0)
        {
            if (library[i].isBorrowed)
            {
                printf("�� å�� �̹� �뿩 ���Դϴ�.\n");
            }
            else
            {
                library[i].isBorrowed = 1;
                printf("å�� �뿩�Ǿ����ϴ�.\n");
            }
            return;
        }
    }
    printf("å�� ã�� �� �����ϴ�.\n");
}

void returnBook()
{
    char title[101];
    printf("�ݳ��� å ������ �Է��ϼ���: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // �ٹٲ� ���� ����

    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].title, title) == 0)
        {
            if (library[i].isBorrowed)
            {
                library[i].isBorrowed = 0;
                printf("å�� �ݳ��Ǿ����ϴ�.\n");
            }
            else
            {
                printf("�� å�� �뿩 ���� �ƴմϴ�.\n");
            }
            return;
        }
    }
    printf("å�� ã�� �� �����ϴ�.\n");
}

void printMenu()
{
    printf("\n[���� ���� ���α׷�]\n");
    printf("1. å �߰�\n");
    printf("2. å �������� �˻�\n");
    printf("3. ���ڷ� �˻�\n");
    printf("4. ���ǻ�� �˻�\n");
    printf("5. å �뿩\n");
    printf("6. å �ݳ�\n");
    printf("0. ����\n");
    printf("����: ");
}

int main()
{
    int choice;

    do
    {
        printMenu();
        scanf("%d", &choice);
        getchar(); // �Է� ���� ����

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            searchByTitle();
            break;
        case 3:
            searchByAuthor();
            break;
        case 4:
            searchByPublisher();
            break;
        case 5:
            borrowBook();
            break;
        case 6:
            returnBook();
            break;
        case 0:
            printf("���α׷��� �����մϴ�.\n");
            break;
        default:
            printf("�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���.\n");
        }
    }
    while (choice != 0);

    return 0;
}
