#include <stdio.h>

int main() {
	int a, b, b1, b2, b3;
	scanf("%d\n%d", &a, &b);
	b1 = b % 10;
	b2 = (b % 100 - b1)/10;
	b3 = (b - ((10 * b2) + b1))/100;
	printf("%d\n", b1 * a);
	printf("%d\n", b2 * a);
	printf("%d\n", b3 * a);
	printf("%d", 100 * b3 * a + 10 * b2 * a + b1 * a);

	return 0;
}