#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int RESULT = 0;
    scanf("%d", &N);
    int arr[101] = { 0 };
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] == 0) {
            RESULT -= 1;
        }
        else if (arr[i] == 1) {
            RESULT += 1;
        }
    }
    if (RESULT > 0) printf("Junhee is cute!");
    else printf("Junhee is not cute!");


    return 0;
}