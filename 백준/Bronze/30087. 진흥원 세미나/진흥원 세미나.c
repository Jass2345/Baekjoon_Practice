#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char A[23];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", A);

        if (strcmp(A, "Algorithm") == 0) {
            printf("204\n");
        }
        else if (strcmp(A, "DataAnalysis") == 0) {
            printf("207\n");
        }
        else if (strcmp(A, "ArtificialIntelligence") == 0) {
            printf("302\n");
        }
        else if (strcmp(A, "CyberSecurity") == 0) {
            printf("B101\n");
        }
        else if (strcmp(A, "Network") == 0) {
            printf("303\n");
        }
        else if (strcmp(A, "Startup") == 0) {
            printf("501\n");
        }
        else if (strcmp(A, "TestStrategy") == 0) {
            printf("105\n");
        }
    }

    return 0;
}
