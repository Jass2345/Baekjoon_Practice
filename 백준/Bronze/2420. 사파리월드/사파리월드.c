#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>

int main() {
	long long N, M;
	long long a = 0;
	scanf("%lld %lld", &N, &M);
	abs(N);
	abs(M);
	if (N > M) {
		a = N - M;
	}
	else { a = M - N; }
	printf("%lld", a);


return 0;
}