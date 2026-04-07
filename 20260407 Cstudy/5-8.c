#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	switch (1 + 1)
	{
	case 1: printf("1\n");
	case 2: printf("2\n");
			printf("2A\n");
	case 3: printf("3\n");
	{
		printf("3A\n");
		break;
		printf("3B\n");
	}
	default: printf("D\n");
	}
}