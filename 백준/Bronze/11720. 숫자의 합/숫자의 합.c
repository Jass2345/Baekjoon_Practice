#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main() {
	char arr[100] = {0};
	int N;
	int RESULT = 0;
	scanf("%d", &N);
	scanf("%s", arr);
	for (int i = 0; i < N; i++) {
		RESULT += arr[i]-'0';
	}
	printf("%d", RESULT);

	return 0;
}