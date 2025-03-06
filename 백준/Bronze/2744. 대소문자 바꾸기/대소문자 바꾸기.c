#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <string.h>

int main() {
	char A[101];
	scanf("%s", A);
	
	for (int i = 0; i < 101; i++) {
		if (A[i] >= 65 && A[i] <= 90) {
			A[i] = A[i] + 32;
		}
		else if (A[i] >= 97 && A[i] <= 122) {
			A[i] = A[i] - 32;
		}
	}

	printf("%s\n", A);
	return 0;
}