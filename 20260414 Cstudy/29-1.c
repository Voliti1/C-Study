#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, sum = 0;

	for (int i = 1; i <= 5; i++) {
		printf("%d번째 정수를 입력하세요 : ", i);
		scanf("%d", &a);
		sum += a;
	}

	printf("5개 정수의 합은 %d입니다.", sum);

}