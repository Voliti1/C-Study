#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//두 정수를 입력받아서 변수 LARGE에는 큰 수를
//SMALL에는 작은 수를 저장하고 출력하는 코드를 작성하세요
int main() {
	int large = 0;
	int small = 0;
	int buffer = 0;

	printf("정수를 입력해주세요 : ");
	scanf("%d", &large);
	printf("정수를 입력해주세요 : ");
	scanf("%d", &small);

	if (small > large)
	{
		buffer = small;
		small = large;
		large = buffer;
	}

	printf("Large : %d\n", large);
	printf("Small : %d", small);
}