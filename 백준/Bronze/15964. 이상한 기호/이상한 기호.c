#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);
    printf("%lld", (A + B) * (A - B));

    return 0;
}