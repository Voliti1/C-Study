#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int array[] = { 3, 6, 4, 2, 8, 4, 9, 1, 7 };
	int search = 0;
	int x = 0;

	printf("찾는 값을 입력해 주세요 : ");
	scanf("%d", &search);

	for (int i = 0; i < sizeof(array) / sizeof(array[0]);)
		if (search == array[i]) {
			printf("해당 값은 %d번째에 저장되어 있습니다.", i + 1);
			x = 1;
			break;
		}
		else
			i++;

	if (x == 0)
		printf("배열 내에 값이 없습니다.");
			
}