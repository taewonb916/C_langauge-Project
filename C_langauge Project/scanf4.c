#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("num1 : ");
	scanf("%d", &num1);

	printf("num2 : ");
	scanf("%d", &num2);

	printf("quotient : %d \n", num1 / num2);
	printf("remainder : %d \n",num1 % num2);
	return 0;
}