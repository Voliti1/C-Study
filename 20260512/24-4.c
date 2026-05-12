#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score[] = {30, 60, 40, 20, 80, 40, 90, 10, 70};
	int compare = 0;
	int ranknum = 1;

	for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
		for (int j = 0; j < sizeof(score) / sizeof(score[0]); j++) {
			compare = score[j];
			if (score[i] < compare) {
				ranknum++;
			}
		}
		printf("score[%d] = %d점 석차는 %d\n", i, score[i], ranknum);
		ranknum = 1;
	}
}