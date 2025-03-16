#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, T, P;
    int arr[6];
    int Shirt = 0;
    scanf("%d", &N);
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &T, &P);
    for (int i = 0; i < 6; i++) {
        Shirt += (arr[i] + T - 1) / T;
    }
    printf("%d\n", Shirt);
    printf("%d %d\n", N / P, N % P);

    return 0;
}