#include<stdio.h>
int main(void) {
    int arr[4][4] = { 0, };
    int input, sum = 0, i, j;

    for (i = 0; i < 4; i++) {
        printf("%dclass? ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            arr[i][3] = arr[i][3] + arr[i][j];
        }
    }

    for (i = 0; i < 4; i++) {
        printf("%dclass : %d\n", i + 1, arr[i][3]);
    }

    return 0;
}