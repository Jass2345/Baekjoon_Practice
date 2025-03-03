#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, m; 
	scanf("%d %d", &h, &m);
	if (m < 45) {
		h--; m += 15;
		if (h < 0) {
			h = 24 + h;
		}
		printf("%d %d", h, m);
	}
	else {
		m -= 45;
		printf("%d %d", h, m);
	}

	return 0;
}