#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int array[] = { 3, 6, 4, 2, 8, 4, 9, 1, 7 };
	int max = 0;
	
	for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		if (array[i] > max)
			max = array[i];
	}

	printf("가장 큰 값 : %d", max);
}