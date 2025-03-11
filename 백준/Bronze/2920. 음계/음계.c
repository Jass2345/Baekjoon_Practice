#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int asc[8] = { 1,2,3,4,5,6,7,8 };
    int desc[8] = { 8,7,6,5,4,3,2,1 };
    int arr[8];
    int A = 0;
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 8; i++) {
        if (arr[i] == asc[i]) {
            A += 1;
        }
        else if (arr[i] == desc[i]) {
            A -= 1;
        }
        else { 
            A += 8;
        }
    }
    if (A == 8) {
        printf("ascending");
    }
    else if (A == -8) {
        printf("descending");
    }
    else { printf("mixed"); }

    return 0;
}
