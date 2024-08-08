#include <stdio.h>

int main()
{
    char ch[10];

    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &ch[i]);       // 문자 입력할 때 띄어쓰기까지 입력이되는 것을 방지하기 위함.
    }

    printf("%c ", ch[0]);
    printf("%c ", ch[3]);
    printf("%c ", ch[6]);

    return 0;
}