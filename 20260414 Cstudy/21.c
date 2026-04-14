#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int m = 0, n = 0, sum = 0;
	printf("정수 m을 입력하세요 : ");
	scanf("%d", &m);
	printf("정수 n을 입력하세요 : ");
	scanf("%d", &n);

	if(m < n)
		for (int i = m; i <= n; i++) {
			sum += i;	
		}
	else
		for (int i = n; i <= m; i++) {
			sum += i;
		}
	printf("정수 m부터 n까지의 합은 %d입니다.", sum);

}