#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  
#include <stdlib.h>

int main() {
	int* arr;
	int n;
	arr = (int*)malloc(sizeof(int) * 30);
	if (arr == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}

	for (int i = 0; i < 30; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		arr[n - 1] = i+1;
	}
	for (int i = 0; i < 30; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i + 1);
		}
	}

	free(arr);
	return 0;
}