#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  
#include <stdlib.h>

int main() {
	int arr[9];
	int Count = 0;
	int Max = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	Max = arr[0];
	for (int i = 1; i < 9; i++) {
		if (Max < arr[i]) {
			Max = arr[i];
			Count = i;
		}
	}
	printf("%d\n", Max);
	printf("%d\n", Count + 1);

	return 0;
}