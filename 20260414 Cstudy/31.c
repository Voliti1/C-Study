#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0, result = 0, count = 0, sum = 0;
	for(int i = 1; i <= 10; i++){
		printf("%d번님의 기부금을 입력하세요 : ", i);
		scanf("%d", &a);
		sum += a;
		count += 1;
	}

	printf("기부금 총액은 %d원 입니다.", sum);
	printf("기부금 평균은 %d원 입니다.", (((sum / count) / 100) * 100));

	


}