#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	int alen = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < alen; i++)
		printf("arr[%d] = %d\n", i, arr[i]);

	char str[] = "C Programming for the first time";
	int slen = sizeof(str) / sizeof(str[0]) - 1;

	printf("alen : %d\r\nslen : %d", alen, slen);
	return 0;
}