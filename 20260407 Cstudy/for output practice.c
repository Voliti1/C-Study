#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count = 0;
	//for (int i = 50; i < 100; i += 5)
	//{
	//	if (i == 50)
	//		continue;
	//	printf("%d\n", i);
	//}
	//return 0;

	for (int i = 50; i < 100; i++)
	{
		if ((i % 3) == 0)
			count++; 
	}
	printf("3의 배수 개수 : %d", count);
}