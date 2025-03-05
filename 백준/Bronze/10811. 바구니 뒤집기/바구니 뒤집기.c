#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  
#include <stdlib.h>

int main() {
	int* arr;
	int N;//바구니 갯수
	int M;//바구니 순서바꾸는 횟수
	int CS;
	int CE;
	int x = 0;
	int y;
	int R = 0;
	scanf("%d %d", &N, &M);

	arr = (int*)malloc(sizeof(int) * N);
	if (arr == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}
	
	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &CS, &CE);
		CS--; CE--;
		for (int j = 0; j <= (CE - CS) / 2; j++) {
			x = arr[CS + j];
			arr[CS + j] = arr[CE - j];
			arr[CE - j] = x;
		}
	}
	
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}

	free(arr);
	return 0;
}