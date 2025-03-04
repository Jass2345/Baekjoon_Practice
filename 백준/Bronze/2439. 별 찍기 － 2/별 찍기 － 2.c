#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for (int j = 0; j < N; j++) {
		for (int h = N; h > j+1; h--) {
			printf(" ");
		}
		for (int i = 0; i < j+1; i++) {
			printf("*");
		}
		printf("\n");
	}
	

	return 0;
}