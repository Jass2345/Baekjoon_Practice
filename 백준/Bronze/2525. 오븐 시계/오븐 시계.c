#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C, D, E, F;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	D = (B + C) / 60;
	E = (B + C) % 60;
	F = A + D;
	if (F >= 24) {
		F -= 24;
	}

	printf("%d %d", F, E);

	return 0;
}