#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4;
	printf("Left Top x,y : ");
	scanf("%d %d", &num1, &num2);
	printf("Right Lower x,y : ");
	scanf("%d %d", &num3, &num4);

	printf("the width of a rectangle : %d", (num3 - num1) * (num4 - num2));
	return 0;
}