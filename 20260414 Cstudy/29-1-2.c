#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, sum = 0, odd = 0, even = 0;

	for (int i = 1; i <= 5; i++) {
		printf("%d번째 정수를 입력하세요 : ", i);
		scanf("%d", &a);
		if (a % 2)
			odd += 1;
		else
			even += 1;
	}

	printf("짝수 개수 %d개, 홀수 개수 %d개 입니다.", even, odd);

}