#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* arr;
    int T, R;
    char S[21];
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %s", &R, S);
        int len = strlen(S);
        arr = (char*)malloc(sizeof(char) * (len * R + 1));
        if (arr == NULL) return -1;

        int idx = 0;
        for (int ii = 0; ii < len; ii++) {
            for (int iii = 0; iii < R; iii++) {
                arr[idx++] = S[ii];
            }
        }
        arr[idx] = '\0';

        printf("%s\n", arr);
        free(arr);
    }

    
    return 0;
}