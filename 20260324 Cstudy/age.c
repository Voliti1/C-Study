#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int age = 0;

	printf("나이를 입력하시오 : ");
	scanf("%d", &age);
	
	age >= 18 ? printf("성인입니다.") : printf("미성년자입니다.");

	return 0;
}