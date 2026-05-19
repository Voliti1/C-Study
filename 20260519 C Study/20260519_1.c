#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//5명 학생의 이름과 점수를 배열에 입력받아서
//학생들의 이름과 점수를 석차 순서대로 출력하시오.
int main() {
	char namearr[5][10];
	int scorearr[5];
	int rankarr[5];
	int rank = 1;
	char namebuffer[1][15];
	int scorebuffer = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("이름을 입력해주세요 : ");
		scanf("%s", namearr[i]);

		printf("점수를 입력해주세요 : ");
		scanf("%d", &scorearr[i]);

		printf("\n");
	}
	
	for(int i = 0; i < 5; i++){
		rank = 1;
		for (int j = 0; j < 5; j++) {
			
			if (scorearr[j] > scorearr[i])
				rank++;
		}
		rankarr[i] = rank;
	}

	printf("\n");

	for (int i = 1; i < 6; i++) {

		for (int j = 0; j < 5; j++) {
			if (rankarr[j] == i) {
				printf("이름 : %s, ", namearr[j]);
				printf("점수 : %d, ", scorearr[j]);
				printf("석차 : %d\n", rankarr[j]);
			}
		}

	}
		
}