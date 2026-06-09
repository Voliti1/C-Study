#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[15];
	int score;
};

int main() {
	struct student Student[3];
	FILE* fp = fopen("C:\\Users\\user\\Desktop\\C-Study\\student_data.txt", "r");

	for (int i = 0; i < 3; i++) {
		fscanf(fp, "%s %d", Student[i].name, &Student[i].score);
		printf("%s %d\n", Student[i].name, Student[i].score);
	}

	fclose(fp);
}