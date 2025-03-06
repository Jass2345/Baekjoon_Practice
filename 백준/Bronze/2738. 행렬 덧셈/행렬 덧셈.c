#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* arrA;
	int* arrB;
	int N;
	int M;
	scanf("%d %d", &N, &M);

	arrA = (int*)malloc(sizeof(int) * N * M);
	arrB = (int*)malloc(sizeof(int) * N * M);

	if (arrA == NULL || arrB == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arrA[i * M + j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arrB[i * M + j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", arrA[i * M + j] + arrB[i * M + j]);
		}
		printf("\n");
	}

	free(arrA);
	free(arrB);
	return 0;
}