#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (A > B) {
        A = B + 1;
        printf("%d\n", A + B);
    }
    else {
        B = A - 1;
        printf("%d\n", A + B);
    }
    

    return 0;
}
