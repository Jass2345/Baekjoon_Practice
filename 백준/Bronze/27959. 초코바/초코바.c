#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);
    if (100 * N >= M) printf("Yes");
    else printf("No");
    
    return 0;
}