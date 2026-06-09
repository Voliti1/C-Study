#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[15];
	int score;
};

int main() {
	struct student Student[3];
	FILE* fp = fopen("C:\\Users\\user\\Desktop\\C-Study\\student_data.txt", "w");

	printf("3명의 이름과 점수를 입력하세요 : ");
	for (int i = 0; i < 3; i++) {
		scanf("%s %d", Student[i].name, &Student[i].score);
	}

	for (int i = 0; i < 3; i++){
		fprintf(fp, "%s %d\n", Student[i].name, Student[i].score);
	}

	fclose(fp);
}