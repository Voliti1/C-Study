#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int array[] = {3, 2, 4, 2, 3, 2, 9, 5, 7};
	int a = 0;
	int count = 0;

	printf("임의의 값을 입력해 주세요 : ");
	scanf("%d", &a);

	for (int i = 0; i < sizeof(array) / sizeof(array[0]);i++)
	{
		if (array[i] > a)
			count++;
	}
	printf("임의의 값 %d보다 큰 수의 개수는 %d개 입니다.", a, count);
}