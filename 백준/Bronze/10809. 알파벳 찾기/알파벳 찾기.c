#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int arr[26];
    char letter[101];
    
    scanf("%s", letter);

    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    for (int i = 0; i < strlen(letter); i++) {
        int index = letter[i] - 'a';
        if (arr[index] == -1) {
            arr[index] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
