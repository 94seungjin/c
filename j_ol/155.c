#include <stdio.h>

int main()
{
    // ���� �迭 �ʱ�ȭ
    char ch[6] = { 'J', 'U', 'N', 'G', 'O', 'L' };
    char input;
    int found = 0;  // ���ڰ� �迭�� �ִ��� ���θ� ��Ÿ���� ����

    // ���� �Է¹ޱ�
    scanf("%c", &input);

    // �迭���� ������ ��ġ�� ã��
    for (int i = 0; i < 6; i++)
    {
        if (ch[i] == input)
        {
            printf("%d\n", i);  // ��ġ ���
            found = 1;  // ���ڰ� �迭�� ����
            break;  // ��ġ�� ã�����Ƿ� �ݺ��� ����
        }
    }

    // �迭�� ���ڰ� ���� ���
    if (!found)
    {
        printf("none\n");
    }

    return 0;
}
