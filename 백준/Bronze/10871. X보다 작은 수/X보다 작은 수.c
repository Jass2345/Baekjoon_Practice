#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[10000];

int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] < X) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}