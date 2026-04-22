#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[] = "C Programming for the first time";
	for (int i = 0; i < sizeof(str); i++)
		printf("%c\n", str[i]);
	return 0;
}