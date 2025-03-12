#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, X;
int A[100000] = { 0 };
int B[1000000] = { 0 };

int main() {
    scanf("%d %d", &N, &X);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N - 1; i++) {
        B[i] = A[i] + A[i + 1];
    }
    int Rday = B[0];
    for (int i = 0; i < N - 1; i++) {
        if (B[i] < Rday) {
            Rday = B[i];
        }
    }
    printf("%d", Rday * X);

    

    return 0;
}
