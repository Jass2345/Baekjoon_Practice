#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, v, R;
	scanf("%d", &N);
	int A[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &v);

	for (int i = 0; i < N; i++) {
		if (A[i] == v) {
			R++;
		}
	}

	printf("%d\n", R);

	return 0;
}