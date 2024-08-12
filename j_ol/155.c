#include <stdio.h>

int main()
{
    // 문자 배열 초기화
    char ch[6] = { 'J', 'U', 'N', 'G', 'O', 'L' };
    char input;
    int found = 0;  // 문자가 배열에 있는지 여부를 나타내는 변수

    // 문자 입력받기
    scanf("%c", &input);

    // 배열에서 문자의 위치를 찾기
    for (int i = 0; i < 6; i++)
    {
        if (ch[i] == input)
        {
            printf("%d\n", i);  // 위치 출력
            found = 1;  // 문자가 배열에 있음
            break;  // 위치를 찾았으므로 반복문 종료
        }
    }

    // 배열에 문자가 없는 경우
    if (!found)
    {
        printf("none\n");
    }

    return 0;
}
