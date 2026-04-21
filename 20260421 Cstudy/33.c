#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sumprice = 0;
	int price = 0;
	int sumpeople = 0;
	int people = 0;

	for(;;)
	{
		printf("인원 수를 입력해주세요 (0이면 퇴근): ");
		scanf("%d", &people);
		if (people == 0)
			break;
		printf("결제 금액을 입력해주세요 : ");
		scanf("%d", &price);
		sumpeople += people;
		sumprice += price;
		
	}

	printf("하루 매출액 : %d원\n", sumprice);
	printf("총 고객 수 : %d명", sumpeople);

	return 0;
}