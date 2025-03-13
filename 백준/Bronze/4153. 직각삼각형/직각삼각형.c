#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B, C;
    while (1) {
        scanf("%d %d %d", &A, &B, &C);
        if (A == 0 && B == 0 && C == 0) break;
        if (A > B && A > C) {
            if (B * B + C * C == A * A) printf("right\n");
            else printf("wrong\n");
        }
        else if (B > A && B > C) {
            if (A * A + C * C == B * B) printf("right\n");
            else printf("wrong\n");
        }
        else {
            if (A * A + B * B == C * C) printf("right\n");
            else printf("wrong\n");
        }
    }

    return 0;
}