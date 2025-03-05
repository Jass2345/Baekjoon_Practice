#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  
#include <stdlib.h>

int main() {
	int* arr;
	int N;
	int RB = 0;
	int RS = 0;
	scanf("%d", &N);
	arr = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	RB = arr[0];
	RS = arr[0];
	for (int i = 0; i < N; i++) {
		if (RB < arr[i]) {
			RB = arr[i];
		}
		if (RS > arr[i]) {
			RS = arr[i];
		}
	}

	printf("%d %d\n", RS, RB);

	free(arr);

	return 0;
}