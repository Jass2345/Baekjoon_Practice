#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C, R;
	scanf("%d %d %d", &A, &B, &C);
	if (A == B) {
		if (A == C) {
			R = 10000 + A * 1000;
		}
		else {
			R = 1000 + B * 100;
		}
	}
	else if (A != B) {
		if (A == C) {
			R = 1000 + A * 100;
		}
		else if (B == C) {
			R = 1000 + B * 100;
		}
		else {
			if (A > B) {
				if (A > C) {
					R = A * 100;
				}
				else if (C > A) {
					R = C * 100;
				}
			}
			else if (A < B) {
				if (C < B) {
					R = B * 100;
				}
				else if (B < C) {
					R = C * 100;
				}
			}
		}
	}
	
	printf("%d", R);

	return 0;
}