#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//500마리의 돼지를 방목하는 양돈장이 있따.
//오늘은 총 중량 5000kg를 출하하는 날이다.
//돼지 무게는 한마리씩 통과하는 길목에 계근대를 설치하여 측정한다.
//출하 대상의 돼지는 60kg에서 80kg까지 이다.
//오늘 출하하는 돼지의 마리수와 총중량을 출력하시오
//만일 출하목표량에 미치지 못할 경우에는 
//출하가 가능한 돼지의 마리수와 총 중량을 출력하시오
// 돼지 무게를 입력받기
int main() 
{
	int pig_weight = 0;
	int daily_total = 0;
	int count = 0;
	const int TOTALWEIGHT = 5000;

for(; daily_total < TOTALWEIGHT;)
{
	printf("돼지 무게를 입력해주세요 : ");
	scanf("%d", &pig_weight);
	if (pig_weight < 60 || pig_weight > 80)
	{
		printf("출하 대상이 아닙니다.\n");
		continue;
	}
	daily_total += pig_weight;
	count += 1;
	printf("현재 출하된 돼지 수 : %d마리\n", count);
	printf("현재까지 출하된 돼지 무게 : %dkg\n\n", daily_total);
	if (TOTALWEIGHT - daily_total < 60)
		break;
}

if (daily_total == TOTALWEIGHT) 
{
	printf("출하목표량을 달성하였습니다.");
	printf("출하 마리수 : %d", count);
}
else
{
	printf("출하목표량을 달성하지 못하였습니다.\n");
	printf("출하 마리수 : %d마리, 총 중량 : %dkg", count, daily_total);
}

	return 0;
}