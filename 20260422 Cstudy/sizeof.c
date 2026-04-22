#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[8];
	int size = sizeof(arr);
	int length = size / sizeof(int);

	printf("arr = %p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);
	printf("%p\n", &arr[3]);
	printf("%p\n", &arr[4]);
	printf("%p\n", &arr[5]);
	printf("%p\n", &arr[6]);
	printf("%p\n", &arr[7]);
	printf("배열의 크기 : %d\n배열의 길이 : %d", size, length);
	return 0;
}