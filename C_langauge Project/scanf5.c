#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("num1 : "), scanf("%d", &num1);
	printf("num2 : "), scanf("%d", &num2);
	printf("num3 : "), scanf("%d", &num3);
	int result = (num1 - num2) * (num2 + num3) * (num3 % num1);


	//printf("(%d - %d) X (%d + %d) X (%d % %d) = %d", num1, num2, num2, num3, num3, num1, result);
	//""안에 % 넣을 수 없다 이유 아직 모름

	printf("%d", result);

	return 0;

}