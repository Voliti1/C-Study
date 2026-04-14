#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 0;
	for (int i = 1; i <= 100; i++)
		a += i;
	
	printf("1부터 100까지의 합 : %d", a);
	return 0;
}