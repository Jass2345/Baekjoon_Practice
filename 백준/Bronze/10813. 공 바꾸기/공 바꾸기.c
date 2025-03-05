#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  
#include <stdlib.h>

int main() {
	int* arr;
	int N; //N은 배열 수, M은 반복 수
	int M;
	int i, j, k;//i부터 j까지 바구니에 k번호 공
	scanf("%d %d", &N, &M);
	arr = (int*)malloc(sizeof(int) * N);

	for (int z = 0; z < N; z++) {
		arr[z] = z + 1;
	}
	for (int h = 0; h < M; h++) {
		scanf("%d %d", &i, &j);
		k = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = k;
	}
	for (int g = 0; g < N; g++) {
		printf("%d ", arr[g]);
	}
	free(arr);

	return 0;
}