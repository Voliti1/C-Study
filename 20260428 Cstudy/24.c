#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int array[6];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("%d번째 정수를 입력해주세요 : ", i + 1);
		scanf("%d", &array[i]);
		sum += array[i];
	}
	array[5] = sum;

	for (int i = 0; i < 6; i++)
		printf("%d ", array[i]);
}