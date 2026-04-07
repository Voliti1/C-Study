#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;
	for (int i = 0, j = 0; i < 3; ++i, j += 2)
	{
		printf("i = %d j = %d\n", i, j);
	}
	/*for (int i = 0;; i++)
	{
		printf("%d\n", i);
		Sleep(1000);
	}*/
	//for (i = 0; i < 2; i++)
	//	printf("%d\n", i);
	/*printf("Á¾·á i =%d\n", i);*/
}