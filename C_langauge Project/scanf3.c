#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("num : ");
	scanf("%d", &num);

	printf(" % d X % d = %d \n", num, num, num * num);
	return 0;
}