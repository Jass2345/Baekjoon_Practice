#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* arr;
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        arr = (char*)malloc(sizeof(char) * 80);
        if (arr == NULL) return -1;
        scanf("%s", arr);
        int len = strlen(arr);
        int count = 0;
        int score = 0;
        for (int ii = 0; ii < len; ii++) {
            if (arr[ii] == 'O') {
                count += 1;
                score += count;
            }
            else {
                count = 0;
            }
        }
        printf("%d\n", score);
        free(arr);
    }

    return 0;
} //8958