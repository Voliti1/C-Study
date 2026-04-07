#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ball1 = 0; int ball2 = 0; int ball3 = 0; int ball4 = 0;
	
	printf("ball1 무게를 입력해주세요 :");
	scanf("%d", &ball1);
	printf("ball2 무게를 입력해주세요 :");
	scanf("%d", &ball2);
	printf("ball3 무게를 입력해주세요 :");
	scanf("%d", &ball3);
	printf("ball4 무게를 입력해주세요 :");
	scanf("%d", &ball4);

	if (ball1 == ball2 && ball2 == ball3)
	{
		printf("ball4만 무게가 다릅니다");
	}
	else if (ball1 == ball2 && ball2 == ball4)
	{
		printf("ball3만 무게가 다릅니다");
	}
	else if (ball1 == ball3 && ball3 == ball4)
	{
		printf("ball2만 무게가 다릅니다");
	}
	else
	{
		printf("ball1만 무게가 다릅니다");
	}

	return 0;
}