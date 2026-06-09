#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Sort(int* arr2, int length);

int main()
{
	int Num_arr[6] = { 6, 8, 2, 9, 4, 7 };
	int length = sizeof(Num_arr) / sizeof(int);
	int min_idx = 0;

	for (int i = 0; i < 6; i++) {
		printf("%d ", Num_arr[i]);
	}

	Sort(Num_arr, length);
	
	printf("\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", Num_arr[i]);
	}
}

void Sort(int arr2[], int length) {
	int temp;

	for (int i = 0; i < length; i++)
	{
		int min_idx = i;
		for (int j = i + 1; j < length; j++)
		{
			if (arr2[min_idx] > arr2[j])
			{
				min_idx = j;
			}
		}

		if (i != min_idx) {
			temp = arr2[i];
			arr2[i] = arr2[min_idx];
			arr2[min_idx] = temp;
		}
	}
}