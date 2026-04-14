#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, sum = 0;

	for (int i = 1; i <= 5; i++) {
		printf("%d번째 정수를 입력하세요 : ", i);
		scanf("%d", &a);
		if (a % 2)
			printf("%d번째 정수 %d는 홀수입니다.\n", i, a);
	}

}