#include <stdio.h>

int main()
{
    char ch[10];

    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &ch[i]);       // ���� �Է��� �� ������� �Է��̵Ǵ� ���� �����ϱ� ����.
    }

    printf("%c ", ch[0]);
    printf("%c ", ch[3]);
    printf("%c ", ch[6]);

    return 0;
}