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
		printf("도서관이 가득참. 더 이상 추가할 수 없음\n");
		return;
	}

    printf("책 제목을 입력하세요: ");
    fgets(library[bookCount].title, sizeof(library[bookCount].title), stdin);
    library[bookCount].title[strcspn(library[bookCount].title, "\n")] = '\0'; // 줄바꿈 문자 제거

    printf("저자를 입력하세요: ");
    fgets(library[bookCount].author, sizeof(library[bookCount].author), stdin);
    library[bookCount].author[strcspn(library[bookCount].author, "\n")] = '\0'; // 줄바꿈 문자 제거

    printf("출판사를 입력하세요: ");
    fgets(library[bookCount].publisher, sizeof(library[bookCount].publisher), stdin);
    library[bookCount].publisher[strcspn(library[bookCount].publisher, "\n")] = '\0'; // 줄바꿈 문자 제거

    library[bookCount].isBorrowed = 0;
    bookCount++;
    printf("책이 추가되었습니다.\n");
}

void searchByTitle()
{
    char title[101];
    printf("검색할 책 제목을 입력하세요: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // 줄바꿈 문자 제거

    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].title, title) == 0)
        {
            printf("[책 정보]\n제목: %s\n저자: %s\n출판사: %s\n대여 상태: %s\n",
                library[i].title, library[i].author, library[i].publisher,
                library[i].isBorrowed ? "대여 중" : "대여 가능");
            return;
        }
    }
    printf("책을 찾을 수 없습니다.\n");
}

void searchByAuthor()
{
    char author[101];
    printf("검색할 저자를 입력하세요: ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = '\0'; // 줄바꿈 문자 제거

    int found = 0;
    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].author, author) == 0)
        {
            printf("[책 정보]\n제목: %s\n저자: %s\n출판사: %s\n대여 상태: %s\n",
                library[i].title, library[i].author, library[i].publisher,
                library[i].isBorrowed ? "대여 중" : "대여 가능");
            found = 1;
        }
    }
    if (!found)
    {
        printf("책을 찾을 수 없습니다.\n");
    }
}

void searchByPublisher()
{
    char publisher[101];
    printf("검색할 출판사를 입력하세요: ");
    fgets(publisher, sizeof(publisher), stdin);
    publisher[strcspn(publisher, "\n")] = '\0'; // 줄바꿈 문자 제거

    int found = 0;
    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].publisher, publisher) == 0)
        {
            printf("[책 정보]\n제목: %s\n저자: %s\n출판사: %s\n대여 상태: %s\n",
                library[i].title, library[i].author, library[i].publisher,
                library[i].isBorrowed ? "대여 중" : "대여 가능");
            found = 1;
        }
    }
    if (!found)
    {
        printf("책을 찾을 수 없습니다.\n");
    }
}

void borrowBook()
{
    char title[101];
    printf("대여할 책 제목을 입력하세요: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // 줄바꿈 문자 제거

    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].title, title) == 0)
        {
            if (library[i].isBorrowed)
            {
                printf("이 책은 이미 대여 중입니다.\n");
            }
            else
            {
                library[i].isBorrowed = 1;
                printf("책이 대여되었습니다.\n");
            }
            return;
        }
    }
    printf("책을 찾을 수 없습니다.\n");
}

void returnBook()
{
    char title[101];
    printf("반납할 책 제목을 입력하세요: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0'; // 줄바꿈 문자 제거

    for (int i = 0; i < bookCount; i++)
    {
        if (strcmp(library[i].title, title) == 0)
        {
            if (library[i].isBorrowed)
            {
                library[i].isBorrowed = 0;
                printf("책이 반납되었습니다.\n");
            }
            else
            {
                printf("이 책은 대여 중이 아닙니다.\n");
            }
            return;
        }
    }
    printf("책을 찾을 수 없습니다.\n");
}

void printMenu()
{
    printf("\n[도서 관리 프로그램]\n");
    printf("1. 책 추가\n");
    printf("2. 책 제목으로 검색\n");
    printf("3. 저자로 검색\n");
    printf("4. 출판사로 검색\n");
    printf("5. 책 대여\n");
    printf("6. 책 반납\n");
    printf("0. 종료\n");
    printf("선택: ");
}

int main()
{
    int choice;

    do
    {
        printMenu();
        scanf("%d", &choice);
        getchar(); // 입력 버퍼 비우기

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
            printf("프로그램을 종료합니다.\n");
            break;
        default:
            printf("잘못된 입력입니다. 다시 시도하세요.\n");
        }
    }
    while (choice != 0);

    return 0;
}
