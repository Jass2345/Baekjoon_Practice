#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, A, B, sum, x;
    int count = 0;

    scanf("%d", &N);
    int memory = N;

    do {
        A = N / 10;  
        B = N % 10; 
        sum = A + B;        
        x = (B * 10) + (sum % 10);  
        N = x;
        count++;
    } while (x != memory);

    printf("%d\n", count);
    return 0;
}
