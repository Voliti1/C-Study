#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[15];
	int score;
};

int main() {
	struct student Student;
	strcpy(Student.name, "홍길동");
	Student.score = 20;
	printf("이름 : %s\n", Student.name);
	printf("나이 : %d\n", Student.score);
}