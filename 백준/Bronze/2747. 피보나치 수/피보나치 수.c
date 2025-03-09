#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* arr;
	int n;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * (n + 1));
	if (arr == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < n + 1; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("%d", arr[n]);

	free(arr);
	return 0;
}