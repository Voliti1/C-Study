#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int age = 0;
	int type = 0;
	int totalnum = 0;
	int num0_29 = 0;
	int num30_49 = 0;
	int num50_59 = 0;
	int numover60 = 0;

	/*for (; age != 0;) {
		switch (age / 10)
		{
		case 0:
		case 1:
		case 2:
			num0_29++;
			break;

		case 3:
		case 4:
			num30_49++;
			break;

		case 5:
			num50_59++;
			break;

		default:
			numover60;
		}
	}
	totalnum = --num0_29 + num30_49 + num50_59 + numover60;
	*/

	for (;;) 
	{
		printf("이용자님의 연령을 입력해주세요 : ");
		scanf("%d", &age);
		
		if (age == 0)
			break;
		else if (age > 0 && age <= 29)
			type = 1;
		else if (age >= 30 && age <= 49)
			type = 2;
		else if (age >= 50 && age <= 59)
			type = 3;
		else
			type = 4;
		switch (type) 
		{
			case 1:
				num0_29 += 1;

			case 2:
				num30_49 += 1;

			case 3:
				num50_59 += 1;
			
			case 4:
				numover60 += 1;
		}

		
	}
	totalnum = num0_29 + num30_49 + num50_59 + numover60;
	
	printf("\n현재 도서관 이용자는 %d명입니다.\n", totalnum);
	printf("0 ~ 29세 : %d명\n", num0_29);
	printf("30 ~ 49세 : %d명\n", num30_49);
	printf("50 ~ 59세 : %d명\n", num50_59);
	printf("60세 이상 : %d명\n", numover60);

	return 0;

}