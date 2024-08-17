#include <stdio.h>

int main() {
    int arr[100];  // 수열을 저장할 배열
    int n;         // 입력받을 두 번째 항
    int i = 2;     // 배열의 인덱스를 위한 변수 (세 번째 항부터 시작)

    // 두 번째 항 입력받기    
    scanf("%d", &n);

    // 첫 번째와 두 번째 항 초기화
    arr[0] = 100;
    arr[1] = n;

    // 수열을 계산하여 배열에 저장
    while (1) {
        arr[i] = arr[i - 2] - arr[i - 1]; // 전전항에서 전항을 뺀 값을 저장

        if (arr[i] < 0) { // 음수가 나오면 종료
            break;
        }

        i++; // 다음 항 계산을 위해 인덱스 증가
    }

    // 수열 출력
    for (int j = 0; j <= i; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}