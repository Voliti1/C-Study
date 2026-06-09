#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int* p = &a;
	*p = 1;
	a = 10;

	printf("a : %d", a);
}