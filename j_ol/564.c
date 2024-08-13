#include <stdio.h>

int main()
{
    int count[26] = { 0 }; // A���� Z������ ī��Ʈ�� ������ �迭
    char ch;

    while (1)
    {
        scanf(" %c", &ch); // ������ ����Ͽ� ���� ���� ���� �����ϰ� ���ڸ� �Է¹���

        if (ch < 'A' || ch > 'Z') // �빮�� ������ ����� ����
        {
            break;
        }

        count[ch - 'A']++; // �ش� �빮���� �ε����� ����
    }

    // A���� Z���� �� �빮���� ������ ���
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0) // �� �� �̻� �Էµ� ���ڸ� ���
        {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
