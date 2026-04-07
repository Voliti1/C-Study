#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, i = 0;
	printf("정수를 입력하세요\n");
	scanf("%d", &n);
label:
	
	if (n == i) goto end;
	printf("%d\n", ++i);
	goto label;

end:;
}