#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s[1000001];
    char d[] = " ";
    int a = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    char* portion = strtok(s, d);
    

    while (portion != NULL) {
        a++;
        portion = strtok(NULL, d);
    }

    printf("%d", a);
    
    return 0;
}//1152