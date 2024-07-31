#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // 공백 출력
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        // 별 출력
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}