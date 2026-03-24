#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int usingtime = 0;

	printf("사용시간을 입력해주세요(초) : ");
	scanf("%d", &usingtime);

	int th = 0, tm = 0;

	th = usingtime / 3600;
	tm = (usingtime % 3600) / 60;

	printf("생산장비 사용시간은 %d시간 %d분입니다.", th, tm);

	return 0;
}