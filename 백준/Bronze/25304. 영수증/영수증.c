#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int X, N, a, b, R = 0;
	scanf("%d", &X);
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		R += a * b;
	}
	if (R == X) {
		printf("Yes");
	}
	else { printf("No"); }

	return 0;
}