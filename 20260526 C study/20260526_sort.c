#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void SelectionSort(int* num, int length);
void Print(int* num, int length);

//1. µ¡¼À, 2. »¬¼À, 3. °ö¼À, 4. ³ª´°¼À, 5. Á¾·á ¹øÈ£¸¦ ¼±ÅÃÇÏ¼¼¿ä.
int main() {

	int nums[6] = { 6, 8, 2, 9, 4, 7 };
	int round = 0;
	int min = 0;
	int length = 6;
	for (int i = 0; i < length; i++) {
		printf("%d ", nums[i]);
	}
	SelectionSort(nums, length);
	printf("\n");
	Print(nums, length);
	return 0;
}

void SelectionSort(int* num, int length) {
	int min = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (num[i] < num[j]) {
				min = num[j];
				num[j] = num[i];
				num[i] = min;
			}
		}
	}
};

void Print(int* num, int length) {
	for (int i = 0; i < 6; i++)
		printf("%d ", num[i]);
}
