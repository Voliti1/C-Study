#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Sum(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);

//1. 덧셈, 2. 뺄셈, 3. 곱셈, 4. 나눗셈, 5. 종료 번호를 선택하세요.
int main() {
	int select = 0;
	int x = 0, y = 0;
	int result = 0;

	while (1)
	{
		printf("1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n5. 종료\n번호를 선택하세요 : ");
		scanf("%d", &select);
		result = 0;

		if (select == 5) break;

		switch (select) {
			case 1:
				printf("첫 번째 정수를 입력해주세요 : ");
				scanf("%d", &x);
				printf("두 번째 정수를 입력해주세요 : ");
				scanf("%d", &y);
				result = Sum(x, y);
				printf("두 정수의 덧셈 결과 : %d\n", result);
				break;

			case 2:
				printf("첫 번째 정수를 입력해주세요 : ");
				scanf("%d", &x);
				printf("두 번째 정수를 입력해주세요 : ");
				scanf("%d", &y);
				result = Sub(x, y);
				printf("두 정수의 뺄셈 결과 : %d\n", result);
				break;
			
			case 3:
				printf("첫 번째 정수를 입력해주세요 : ");
				scanf("%d", &x);
				printf("두 번째 정수를 입력해주세요 : ");
				scanf("%d", &y);
				result = Mul(x, y);
				printf("두 정수의 곱셈 결과 : %d\n", result);
				break;

			case 4:
				printf("첫 번째 정수를 입력해주세요 : ");
				scanf("%d", &x);
				printf("두 번째 정수를 입력해주세요 : ");
				scanf("%d", &y);
				while (y == 0){
					printf("0으로는 나눌수 없습니다.\n");
					printf("두 번째 정수를 입력해주세요 : ");
					scanf("%d", &y);
				}
				result = Div(x, y);
				printf("두 정수의 나눗셈 결과 : %d\n", result);
				break;

		}
	}

}

int Sum(int a, int b) {
	return a + b;
};

int Sub(int a, int b) {
	return a - b;
};

int Mul(int a, int b) {
	return a * b;
};

int Div(int a, int b) {
	return a / b;
};