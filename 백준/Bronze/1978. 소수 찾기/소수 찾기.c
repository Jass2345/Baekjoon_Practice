#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prime(int num) {
    if (num < 2) return 0; 
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int N, num, count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (prime(num)) count++; 
    }

    printf("%d\n", count);
    return 0;
}
