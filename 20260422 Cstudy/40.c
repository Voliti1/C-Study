#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 사과 재배 농가에서 중량이 적절한 상품을 선별하고자 한다.
* 표준 중량은 200g이며 허용오차는 +-5g이다.
* 선별 과정을 통과하지 못한 사과는 폐기한다.
* 폐기할 사과의 비율을 알려주는 코드를 작성하시오.
* 조건) 선별기를 통과하는 사과의 개수는 모르고 
* while문 사용
*/

int main() 
{
	int apple_weight = 0;
	int total_count = 0;
	int trash_count = 0;
	const STANDARD_WEIGHT = 200;

	while (1)
	{
		printf("사과의 무게를 입력해주세요 (0이면 프로그램 종료) : ");
		scanf("%d", &apple_weight);

		if (apple_weight == 0) break;

		total_count++;
		if (apple_weight < STANDARD_WEIGHT - 5 || apple_weight > STANDARD_WEIGHT + 5) 
		{
			trash_count++;
		}
		printf("무게가 입력된 사과 수 : %d\n", total_count);
		printf("폐기해야할 사과 수 : %d\n\n", trash_count);
	}

	if (total_count > 0) // 0으로 나누는거 방지
	{
		printf("\n폐기할 사과 비율 : %d%%", (trash_count * 100) / total_count);
	}
	return 0;
}