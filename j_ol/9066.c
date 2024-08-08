#include <stdio.h>

int main()
{
    char ch[26];

    for (int i = 0; i < 26; i++)
    {
        ch[i] = 'A' + i;
    }
    for (int i = 25; i >= 0; i--)
    {
        printf("%c ", ch[i]);
    }
    return 0;
}