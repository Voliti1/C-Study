#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct Student {
	char name[10];
	int score1;
	int score2;
	int sum;
};

int main() {
	const int num1 = 4, num2 = 2;
	char buffer2[10];

	struct Student s[4], buffer;

	for (int i = 0; i < 4; i++) {
		printf("%d번째 학생 정보 입력\n", i + 1);

		printf("이름 : ");
		scanf("%s", s[i].name);

		printf("1번 과목 점수 : ");
		scanf("%d", &s[i].score1);

		printf("2번 과목 점수 : ");
		scanf("%d", &s[i].score2);

		s[i].sum = s[i].score1 + s[i].score2;
	}

	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num1; j++) {
			if (s[i].sum > s[j].sum) {
				buffer = s[i];
				s[i] = s[j];
				s[j] = buffer;

			}
		}
	}

	printf("총점 순 정렬\n");
	for (int i = 0; i < num1; i++) {
		printf("이름 : %s, ", s[i].name);
		printf("1번 과목 점수 : %d, ", s[i].score1);
		printf("2번 과목 점수 : %d ", s[i].score2);
		printf("\n");
	}

	return 0;
}