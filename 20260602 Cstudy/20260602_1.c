#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	const int num1 = 4, num2 = 2;
	char name[4][10];
	int sum[4] = { 0, 0, 0, 0 };
	int score[4][2];
	int buffer;
	char buffer2[10];

	for (int i = 0; i < num1; i++) {
		printf("이름 : ");
		scanf("%s", &name[i]);

		for (int j = 0; j < num2; j++) {
			printf("%d번 과목 점수 : ", j + 1);
			scanf("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num2; j++) {
			sum[i] += score[i][j];
		}
	}

	for (int i = 0; i < num1; i++) {
		for (int j = 0; j < num1; j++) {
			if (sum[i] > sum[j]) {
				buffer = sum[i];
				sum[i] = sum[j];
				sum[j] = buffer;
				
				for (int k = 0; k < num2; k++) {
					buffer = score[i][k];
					score[i][k] = score[j][k];
					score[j][k] = buffer;
				}	

				strcpy(buffer2, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], buffer2);				
				
			}
		}
	}

	printf("총점 순 정렬\n");
	for (int i = 0; i < num1; i++) {
		printf("이름 : %s ", name[i]);
		for (int j = 0; j < num2; j++) {
			printf("%d번 과목 점수 : %d ", j + 1 , score[i][j]);
		}
		printf("\n");
	}

	return 0;
}