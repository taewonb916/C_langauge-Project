#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1, num2;
	printf("num1 : "), scanf("%lf", &num1);
	printf("num2 : "), scanf("%lf", &num2);
	printf("%f + %f = %f ", num1, num2, num1 + num2);
	return 0;
}