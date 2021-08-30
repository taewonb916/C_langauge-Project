#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;	// num1 < num2
	int sum = 0;
	int i;

	printf("두 개의 정수 입력 : "), scanf("%d %d", &num1, &num2);

	for (; num1 <= num2; num1++)
	{
		sum += num1;
	}
	printf("두 정수 사이의 정수의 합 : %d \n", sum);
	return 0;

}