#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char arr[1001] = { 0 };
    int arr2[4] = { 0 };
    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++) {
        if (arr[i] == 'A') arr2[0] = 1;
        else if (arr[i] == 'B') arr2[1] = 1;
        else if (arr[i] == 'C') arr2[2] = 1;
        else arr2[3] += 1;
    }

    if (arr2[3] == strlen(arr)) {
        for (int i = 0; i < strlen(arr); i++) {
            arr[i] = 'A';
        }
    }
    else {
        for (int i = 0; i < strlen(arr); i++) {
            if (arr2[0] == 1) {
                if (arr[i] == 'B' || arr[i] == 'C' || arr[i] == 'D' || arr[i] == 'F') {
                    arr[i] = 'A';
                }
            }
            else if (arr2[0] != 1 && arr2[1] == 1) {
                if (arr[i] == 'C' || arr[i] == 'D' || arr[i] == 'F') {
                    arr[i] = 'B';
                }
            }
            else if (arr2[0] != 1 && arr2[1] != 1 && arr2[2] == 1) {
                if (arr[i] == 'D' || arr[i] == 'F') {
                    arr[i] = 'C';
                }
            }
        }
    }

    printf("%s\n", arr);
    return 0;
}