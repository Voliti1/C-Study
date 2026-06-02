#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct STag {
	int m;
	char c;
} SType;

int main() {
	struct STag s1;
	s1.m = 1;

	SType s2;
	s2.m = 2;
	
	printf("s1.m : %d, s2.m : %d", s1.m, s2.m);
	return 0;
}