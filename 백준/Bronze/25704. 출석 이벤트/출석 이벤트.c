#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, P;
    scanf("%d %d", &N, &P);
    if (N < 5) {
        printf("%d", P);
    }
    else if (N < 10) {
        if (P - 500 <= 0) printf("0");
        else printf("%d", P - 500);
    }
    else if (N < 15) {
        if (P - 500 <= 0) printf("0");
        else if (P > 5000) printf("%d", P - (P / 10));
        else if (P > 500) printf("%d", P - 500);
    }
    else if (N < 20) {
        if (P - 2000 <= 0) printf("0");
        else if (P > 20000) printf("%d", P - (P / 10));
        else if (P > 2000) printf("%d", P - 2000);
    }
    else {
        if (P - 2000 <= 0) printf("0");
        else if (P > 8000) printf("%d", P - (P / 4));
        else if (P > 2000) printf("%d", P - 2000);
    }


    return 0;
}