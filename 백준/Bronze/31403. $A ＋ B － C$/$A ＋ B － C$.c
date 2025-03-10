#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    unsigned int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    printf("%d\n", (A + B) - C);
    if (B < 10) {
        printf("%d", ((10 * A) + B) - C);
    }
    else if (B < 100) {
        printf("%d", ((100 * A) + B) - C);
    }
    else if (B < 1000) {
        printf("%d", ((1000 * A) + B) - C);
    }
    else {
        printf("%d", ((10000 * A) + B) - C);
    }
    

    return 0;
}