#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2 = 1;

	printf("양의 정수 입력 : "), scanf("%d", &num1);

	while (num2<=num1)
	{
		printf("%d \n", 3 * num2);
		num2++;
	}
	return 0;
}