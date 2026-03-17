#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	typedef int MyInt;
	int a = 1;
	MyInt b = 2;
	b = a;
	printf("%d", b);
}