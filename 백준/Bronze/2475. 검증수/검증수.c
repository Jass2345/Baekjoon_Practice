#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main() {
	int a, b, c, d, e;
	int x = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	a *= a;
	b *= b;
	c *= c;
	d *= d;
	e *= e;
	x = (a + b + c + d + e) % 10;
	printf("%d", x);

	return 0;
}