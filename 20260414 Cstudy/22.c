#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0, result = 0;
	printf("정수 n을 입력하세요 : ");
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++){
		result = n * i;
		printf("%d * %d = %d\n", n, i, result);
	}
}