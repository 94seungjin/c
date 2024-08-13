#include <stdio.h>

int main()
{
    int count[26] = { 0 }; // A부터 Z까지의 카운트를 저장할 배열
    char ch;

    while (1)
    {
        scanf(" %c", &ch); // 공백을 사용하여 이전 개행 문자 무시하고 문자를 입력받음

        if (ch < 'A' || ch > 'Z') // 대문자 범위를 벗어나면 종료
        {
            break;
        }

        count[ch - 'A']++; // 해당 대문자의 인덱스를 증가
    }

    // A부터 Z까지 각 대문자의 개수를 출력
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0) // 한 번 이상 입력된 문자만 출력
        {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
