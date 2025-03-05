#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  
#include <stdlib.h>

int main() {
	int* arr;
	int* arrR;
	int R = 0;
	arr = (int*)malloc(sizeof(int) * 10);
	arrR = (int*)malloc(sizeof(int) * 42);

	if (arr == NULL || arrR == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}
	
	for (int i = 0; i < 10; i++) {
		arrR[i] = 0;
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arrR[arr[i] % 42] = 1;
	}
	for (int i = 0; i < 42; i++) {
		if (arrR[i] == 1) {
			R++;
		}
	}

	printf("%d", R);

	free(arr);
	return 0;
}